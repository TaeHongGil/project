def solution(a):
    answer = []
    
    if(len(a)==1):
        return 1
    min_num = a[0]
    for i in range(1,len(a)-1):
        if(min_num > a[i]):
            min_num = a[i]
            answer.append(a[i])

    min_num=a[-1]
    for i in range(len(a)-2,0,-1):
        if(min_num > a[i]):
            min_num = a[i]
            answer.append(a[i])

    return len(set(answer))+2

n = [-16,1,-33]

print(solution(n))