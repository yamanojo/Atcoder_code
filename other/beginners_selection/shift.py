import numpy as np

N = int(input())
A_ar = np.array(list(map(int, input().split(" "))))


num = 0
while True:
    if ((A_ar %2)==1).any():
        break
    num += 1 
    A_ar = A_ar/2

print(num)
