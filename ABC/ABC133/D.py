
N = int(input())
A = list(map(int,input().split(" ")))

'''
M A M A ... A M
1 1 2 2     N 1

 M A M A M A M
 1 1 2 2 3 3 1
 x
 a1-x
 a2-(a1-x) = a2-a1+x
 a3-(a    ) = a3-a2+a1-x x


'''
sum_g = sum(A[1::2])
sum_k = sum(A[::2])

M0 = (sum_k - sum_g)//2
M = [0]* N 
M[0] = M0
for i in range(0,N-1):
    M[i+1] = A[i]-M[i]
    n_before = M[i+1]

text = ""

for m in M:
    text += "{} ".format(m*2)

print(text[:-1])
