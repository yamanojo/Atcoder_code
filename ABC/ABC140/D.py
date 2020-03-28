N,K = map(int,input().split())
S = input()

ans = 0
tmp_s = None
for s in S:
    if tmp_s == s:
        ans+=1
    tmp_s = s

ans = min(ans+2*K,N-1)

print(ans)