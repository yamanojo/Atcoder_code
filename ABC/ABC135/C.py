
import numpy as np
N = int(input())

A_ls = np.array(list(map(int,input().split(" "))))
B_ls = np.array(list(map(int,input().split(" "))))

S = 0

for i,b in enumerate(B_ls):
    if b > A_ls[i]:
        b -= A_ls[i]
        S += A_ls[i]
        if A_ls[i+1] >= b:
            A_ls[i+1] -=b
            S+=b
        else:
            S+=A_ls[i+1]
            A_ls[i+1] = 0 
    else:
        S += b

print(S)

3
5 6 3 8
5 100 8