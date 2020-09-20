
def solution(board, r, c):
    answer = 0

    while(1):
        choice = board[r][c]
        if(choice == 0):
            for i in range(r,4):
                if(board[i][c] != 0):
                    answer+=2
                    choice = board[i][c]
                    board[i][c] = 0
                    r = i
                    break
            for i in range(c,4):
                if(board[r][i] != 0):
                    answer+=2
                    choice = board[r][i]
                    board[r][i] = 0
                    c = i
                    break
            
            for i in range(0,r):
                if(board[i][c] != 0):
                    answer+=2
                    choice = board[i][c]
                    board[i][c] = 0
                    r = i
                    break
            for i in range(0,4):
                if(board[r][i] != 0):
                    answer+=2
                    choice = board[r][i]
                    board[r][i] = 0
                    c = i
                    break

            else:
                for i in range(4):
                    m = 0
                    for j in range(4):
                        if(board[i][j] != 0):
                            answer+=3
                            choice = board[i][j]
                            board[i][j] = 0
                            r = i
                            c = j
                            m = 1
                            break
                    if(m==1):
                        break
        else:
            board[r][c] = 0
            answer +=1

        for i in range(4):
            if(board[i][c] == choice):
                answer+=3
                choice = 0
                board[i][c] = 0
                r = i
                break
            if(board[r][i] == choice):
                answer+=3
                choice = 0
                board[r][i] = 0
                c = i
                break
        else:
            for i in range(4):
                m = 0
                for j in range(4):
                    if(board[i][j] == choice):
                        answer+=3
                        choice = 0
                        board[i][j] = 0
                        r = i
                        c = j
                        m = 1
                        break
                if(m==1):
                    break
        if(board.count([0,0,0,0]) == 4):
            break
        for i in board:
            print(i)
        print(answer)


    return answer


board = [[3,4,5,2],[4,5,1,6],[0,1,6,0],[2,0,0,3]]	
r = 0
c = 1

print(solution(board,r,c))

'''

        '''