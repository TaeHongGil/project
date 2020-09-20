def solution(n):
    a = 0
    for i in range(1,n+1):
        a += i
    answer = [0] * a
    
    x = 0
    y = 1
    while(n > 0):
        count = 0

        for i in range(x,len(answer)):
            if(answer[i] == 0):
                break
            count += 1
        for i in range(n):
            x += count
            answer[x] = y
            y += 1
            count += 1

        n -= 1

        for i in range(n):
            x += 1
            answer[x] = y
            y += 1

        n -= 1
        count = 0

        for i in range(x,-1,-1):
            if(answer[i] == 0):
                break
            count += 1
        
        for i in range(n):
            x -= count
            answer[x] = y
            y += 1
            count -= 1

        n -=1
        
    return answer

n = 6

print(solution(n))