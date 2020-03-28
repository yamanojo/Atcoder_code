N = int(input())
a_ls = list(map(int,input().split(" ")))
N = [0]*N
l = len(a_ls)

# 大きい方からチェック
for i in range(l):
    a = a_ls[-(i+1)]
    s = sum(N[(l-i)-1::(l-i)])%2
    # print(s)
    # print(a)
    if a != s:
        N[-(i+1)]=1
        
sen = ""
for i,n in enumerate(N):
    if n == 1:
        sen += "{} ".format(i+1)

if len(sen) == 0:
    print(0)
else:
    print(sum(N))
    print(sen[:-1])
