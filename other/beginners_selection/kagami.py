S = input()
er_flag = False

while True:
    if S == '':
        answer = 'YES'
        break

    if S[0] == 'd':
        if S[:5]=='dream':
            S = S[5:]
            er_flag = True
        else:    
            answer = 'NO'    
            break
    elif S[0] == 'e':

        if S[:5]=='erase':
            if S[:6] == 'eraser':
                S = S[6:]
            else:
                S = S[5:]
        elif er_flag == True:
            if S[:2] == 'er':
                S = S[2:]
            else:
                answer = 'NO'
                break
        else:
            answer = 'NO'
            break

        er_flag = False
            
    else:
        answer = 'NO'
        break

print(answer)

