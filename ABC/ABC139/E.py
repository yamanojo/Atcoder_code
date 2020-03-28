from collections import deque

N = int(input())

A = []
for _ in range(N):
    A.append(deque(map(int,input().split())))

match_num = N *(N-1)//2

flag = 0
day = 0
checker = set()
q = []
while match_num != 0:
    for i in range(N):
        if bool(A[i]) == False:
            continue
        if i in checker:
            continue
        a = A[i][0]-1
        if a in checker:
            continue
        if A[a][0]-1== i:
            A[i].popleft()
            A[a].popleft()
            checker.add(a)
            checker.add(i)
            match_num-=1
            flag += 1
        else:
            q.put()

    day +=1
    if flag == 0:
        print(-1)       
        exit()

    checker = set()
    flag = 0

print(day)
