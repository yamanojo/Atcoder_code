import numpy as np

N, Y = map(int,input().split(" "))

unit_all = Y//1000
# 10000円と1000円札で考える
finish_flag = False
for i in range(N+1):
    for j in range(N-i+1):
        num = [i,j,N-i-j] 
        unit_sum = 10*num[0]+5*num[1]+num[2]
        if unit_all == unit_sum:
            finish_flag = True
            break

    else:
        continue
    break

if finish_flag == False:
    num = [-1,-1,-1]

print("{} {} {}".format(num[0],num[1],num[2]))


