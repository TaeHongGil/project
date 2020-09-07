def solution(v):
    answer = [0,0]

    a = []
    b = []
    for i in v:
        a.append(i[0])
        b.append(i[1])

    for i,j in zip(a,b):
        if(a.count(i) == 1):
            answer[0] = i
        if(b.count(j) == 1):
            answer[1] = j

    return answer

v = [[1, 1], [2, 2], [1, 2]]

print(solution(v))