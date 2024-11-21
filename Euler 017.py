def convert_to_words1(num): 
    if num == 0:  
        return "Zero"  
    ones = ["", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]  
    tens = ["", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"]  
    teens = ["Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"]  
    words = ""  
    if num>= 1000:  
        words += ones[num // 1000] + " Thousand "  
        num %= 1000  
    if num>= 100:  
        words += ones[num // 100] + " Hundred "  
        num %= 100  
    if num>= 10 and num<= 19:  
        words += teens[num - 10] + " "  
        num = 0  
    elif num>= 20:  
        words += tens[num // 10] + " "  
        num %= 10  
    if num>= 1 and num<= 9:  
        words += ones[num] + " "  
    return words.strip() 
def convert_to_words(num):  
    if num == 0:  
        return "Zero"  
    ones = ["", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]  
    tens = ["", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"]  
    teens = ["Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"]  
    
    words = ""  
    if num>= 1000000000:  
        words += convert_to_words1(num//1000000000) + " Billion "  
        num %= 1000000000  
    if num>= 1000000:  
        words +=  convert_to_words1(num//1000000) + " Million "  
        num %= 1000000  
    if num>= 1000:  
        words += convert_to_words1(num//1000) + " Thousand "  
        num %= 1000  
    if num>= 100:  
        words += ones[num // 100] + " Hundred "  
        num %= 100  
    if num>= 10 and num<= 19:  
        words += teens[num - 10] + " "  
        num = 0  
    elif num>= 20:  
        words += tens[num // 10] + " "  
        num %= 10  
    if num>= 1 and num<= 9:  
        words += ones[num] + " "  
    return words.strip() 
    
for i in range(int(input())):
    print(convert_to_words(int(input())))