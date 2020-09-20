import itertools

def solution(orders, course):
    answer = []
    menu = {}

    for j in course:
        menu['name'] = 'X'
        menu['count'] = 0
        s = []
        for i in orders:
            for x in list(itertools.combinations(i,j)):
                x = sorted(x)
                count = 0
                for y in orders:
                    w_count = 0
                    for n in range(j):
                        if(x[n] in y):
                            w_count += 1
                    else:       
                        if(w_count == j):
                            count+=1
                if(count >= menu['count'] and count >= 2):
                    if(count > menu['count']):
                        s = []
                        menu['name'] = "".join(x)
                        menu['count'] = count

                    if(count == menu['count'] and "".join(x) != menu['name']):
                        s.append("".join(x))


        if(menu['name'] != 'X'):
            answer.append((menu['name']))
            s = set(s)
            if(len(s) != 0):
                for i in s:
                    answer.append(i)

    return sorted(answer)

orders = ["XYZ", "XWY", "WXA"]
course = [2,3,4]
print(solution(orders, course))
