N, Q = map(int,input().split())
G = [[] for _ in range(N)]
 
for _ in range(N-1):
    a, b = map(int,input().split())
    a -= 1
    b -= 1
    G[a].append(b)
 
W = [0 for _ in range(N)]
for _ in range(Q):
    p, x = map(int,input().split())
    p -= 1
    W[p] += x
 
ans = [0 for _ in range(N)]
 
F = [0]
ans[0] = W[0]
while F:
    v = F.pop()
    for c in G[v]:
        ans[c] = ans[v] + W[c]
        F.append(c)
 
print(" ".join(map(str,ans)))