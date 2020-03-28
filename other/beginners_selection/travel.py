N = int(input())
txy_ls = []

for _ in range(N):
    txy_ls.append(list(map(int,input().split(" "))))

txy_before = [0,0,0]

answer = 'Yes'
for txy in txy_ls:
    t_dis = txy[0]-txy_before[0]
    x_dis = abs(txy[1]-txy_before[1])
    y_dis = abs(txy[2]-txy_before[2])
    m_dis = x_dis + y_dis
    if m_dis <= t_dis and m_dis%2 ==t_dis%2:
        continue
    else:
        answer = 'No'
        break

print(answer)


