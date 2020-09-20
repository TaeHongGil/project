import itertools

def solution(numbers):
    return sorted(list(set(list(map(lambda x: x[0]+x[1],list(itertools.combinations(numbers,2)))))))

n = [2,1,3,4,1]

print(solution(n))