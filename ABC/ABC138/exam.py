import queue

N,Q = map(int,input().split(" "))
A = []
B = []
for _ in range(N-1):
    a,b = map(int,input().split(" "))
    A.append(a)
    B.append(b)

P = []
X = []
for _ in range(Q):
    p,x = map(int,input().split(" "))
    P.append(p)
    X.append(x)

ans = [0]*N
q = queue.LifoQueue()
q.put(1)
while q.empty() != True:
    d = q.get()
    tmp_b = []
    for a,b in zip(A,B):
        if d == a:
            tmp_b.append(b)
            q.put(b)

    for p,x in zip(P,X):
        if d == p:
            ans[p-1] += x

    for b in tmp_b:    
        ans[b-1] += ans[d-1]
text = ""

for t in ans:
    text += "{} ".format(t)

print(text[:-1])

