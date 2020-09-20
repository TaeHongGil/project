def exchange_sort(n, s):
    temp = 0

    for i in range(n):
        for j in range(i+1,n):
            if(s[j] < s[i]):
                temp = s[i]
                s[i] = s[j]
                s[j] = temp

    return s

s = [10, 7, 11, 5, 13, 8]
n = 6

print(exchange_sort(n,s))