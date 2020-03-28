N = int(input())
H = list(map(int, input().split()))

ans = 0
tmp_ans = -1
tmp_h = H[0]
for h in H:
    if h <= tmp_h:
        tmp_ans += 1
    else:
        ans = max(ans,tmp_ans)
        tmp_ans = 0
    tmp_h = h
ans = max(ans,tmp_ans)
print(ans)

