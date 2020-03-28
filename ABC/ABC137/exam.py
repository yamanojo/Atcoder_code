N,M = map(int,input().split(" "))

A = []
B = []
for _ in range(N):
    a,b = map(int,input().split(" "))
    A.append(a)
    B.append(b)


# 日数でソート
ind_sorted = sorted(range(N), key = lambda x:A[x])

tmp_a = 0
tmp_b_ls = [0]
money = 0
for i in range(N):
    if A[ind_sorted[i]] > M:
        break
    if tmp_a != A[ind_sorted[i]]:
        d = A[ind_sorted[i]]-tmp_a
        tmp_b_ls = sorted(tmp_b_ls)[::-1]
        if d == 1:
            tmp_money = max(tmp_b_ls[0],tmp_b_ls[:])
        tmp_money = sum(tmp_b_ls[:d])
        tmp_b_ls = tmp_b_ls[d:]
        money += tmp_money
        tmp_a = A[ind_sorted[i]]
    tmp_b_ls.append(B[ind_sorted[i]])

d = M+1-tmp_a
tmp_money = sum(sorted(tmp_b_ls)[::-1][:d])
money += tmp_money

print(money)