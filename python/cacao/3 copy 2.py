
def check(i , j):
    if not(i[0] == j[0] or i[0] == '-'):
        return 0
    if not(i[1] == j[1] or i[1] == '-'):
        return 0
    if not(i[2] == j[2] or i[2] == '-'):
        return 0
    if not(i[3] == j[3] or i[3] == '-'):
        return 0
    if not(int(i[4]) <= int(j[4])):
        return 0
    return 1

def solution(info, query):
    answer = []
    for i in range(len(info)):
        info[i]= info[i].split(" ")
    for i in range(len(query)):
        query[i] = "".join(query[i].split("and ")).split(" ")
    
    for i in query:
        count = 0
        for j in info:
            if(check(i,j)):
                count += 1
                
        answer.append(count)

    return answer


info = ["java backend junior pizza 150","python frontend senior chicken 210",
        "python frontend senior chicken 150","cpp backend senior pizza 260","java backend junior chicken 80","python backend senior chicken 50"]

query = ["java and backend and junior and pizza 100","python and frontend and senior and chicken 200",
        "cpp and - and senior and pizza 250","- and backend and senior and - 150","- and - and - and chicken 100","- and - and - and - 100"]	

print(solution(info,query))