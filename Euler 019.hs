import qualified Data.Map as Map
import Control.Monad (replicateM_)
import Data.List (scanl')

months :: Map.Map Int Int
months = Map.fromList
    [ (1, 0), (2, 3), (3, 3), (4, 6), (5, 1), (6, 4)
    , (7, 6), (8, 2), (9, 5), (10, 0), (11, 3), (12, 5)
    ]

isLeapYear :: Int -> Bool
isLeapYear year
    | year `mod` 400 == 0 = True
    | year `mod` 100 == 0 = False
    | year `mod` 4 == 0 = True
    | otherwise = False

computeYears :: Map.Map Int Int
computeYears = Map.fromList $ zip [0..399] odList
  where
    odList = scanl' (\acc i -> (acc + if isLeapYear i then 2 else 1) `mod` 7) 0 [1..399]

parseDate :: String -> (Int, Int, Int)
parseDate dateStr = (year, month, day)
  where
    [yearStr, monthStr, dayStr] = words dateStr
    year = read yearStr
    month = read monthStr
    day = read dayStr

dayCalc :: String -> Bool
dayCalc st = oddDays `mod` 7 == 0
  where
    (year, mon, day) = parseDate st
    monthsValue = months Map.! mon
    leapDay = if isLeapYear year && mon > 2 then 1 else 0
    yearValue = computeYears Map.! ((year - 1) `mod` 400)
    oddDays = day + monthsValue + leapDay + yearValue

monthsSinceBase :: Int -> Int -> Int
monthsSinceBase year month = year * 12 + (month - 1)

generateDates :: String -> String -> [String]
generateDates strt_date_str end_date_str = dates
  where
    (startYear, startMonth, startDay) = parseDate strt_date_str
    (endYear, endMonth, _) = parseDate end_date_str
    startMonthIndex = monthsSinceBase startYear startMonth
    endMonthIndex = monthsSinceBase endYear endMonth
    firstMonthIndex = if startDay == 1 then startMonthIndex else startMonthIndex + 1
    monthsIndices = [firstMonthIndex .. endMonthIndex]
    dates = map formatDate monthsIndices
    formatDate mi = unwords [show y, show m, "1"]
      where
        y = mi `div` 12
        m = (mi `mod` 12) + 1

main :: IO ()
main = do
    tStr <- getLine
    let t = read tStr
    replicateM_ t $ do
        strt_date <- getLine
        end_date <- getLine
        let dates = generateDates strt_date end_date
            ans = length $ filter dayCalc dates
        print ans
