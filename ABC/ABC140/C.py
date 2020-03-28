N = int(input())

B = list(map(int,input().split()))

ans = 0
tmp_b = 0

tmp_b = B[0]
for b in B:
    max_a = min(tmp_b,b)
    ans += max_a 
    tmp_b = b

max_a = B[-1]
ans += max_a

print(ans)
