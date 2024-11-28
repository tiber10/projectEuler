function factorial(n)
    if n == 1
        return 1
    end
    return n * factorial(n - 1)
end

permutations = [factorial(i) for i in 12:-1:1]

function generate_permutation(N::Int)
    N -= 1
    ret = ""
    letters = collect("abcdefghijklm")
    
    for i in permutations
        q, N = divrem(N, i)
        ret *= letters[q + 1]  # Julia uses 1-based indexing
        deleteat!(letters, q + 1)
    end
    
    ret *= letters[1]
    return ret
end

n_cases = parse(Int, readline())
for _ in 1:n_cases
    N = parse(Int, readline())
    println(generate_permutation(N))
end
