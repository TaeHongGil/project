
def solution(n, s, a, b, fares):
    answer = 0
    fares = sorted(fares,key=lambda x: x[2])
    node = [0] * n
    print(node)

    location = s
    while(1):
        for i in fares:
            i[0] == location
            
        break
    
    return answer

n = 6
s = 4
a = 6
b = 2

fares =[[4, 1, 10], [3, 5, 24], [5, 6, 2], [3, 1, 41], [5, 1, 24], [4, 6, 50], [2, 4, 66], [2, 3, 22], [1, 6, 25]]	

print(solution(n,s,a,b,fares))