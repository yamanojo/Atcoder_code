import numpy as np

N = int(input())
A = np.zeros(N)

for i in range(N):
    A[i] = int(input())

ind = A.argsort()[::-1][:2]

first_a = A[ind[0]]
second_a = A[ind[1]]

for i, a in enumerate(A):
    if i == ind[0]:
        print(int(second_a))
    else:
        print(int(first_a))



