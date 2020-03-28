import bisect
import time
import heapq


# N: バイトの種類
# M: 日数の最大
N,M = map(int,input().split(" "))

# A 日数
# b バイト代
A = []
B = []
for _ in range(N):
    a,b = map(int,input().split(" "))
    A.append(a)
    B.append(-b)

# 日数でソート
ind_sorted = sorted(range(N), key = lambda x:A[x])
tmp_a = 0
tmp_b_ls = [0]
money = 0
tmp_ind = 0
for i in range(N):
    if A[ind_sorted[i]] > M:
        break
    if tmp_a != A[ind_sorted[i]]:
        # 空いている日数
        # print(d)
        # print(tmp_b_ls)
        d = A[ind_sorted[i]]-tmp_a
        for _ in range(d):
            if tmp_b_ls == []:
                break
            money -= heapq.heappop(tmp_b_ls)
        tmp_a = A[ind_sorted[i]]
    heapq.heappush(tmp_b_ls,B[ind_sorted[i]])

d = M+1-tmp_a
# print(d)
# print(tmp_b_ls)

for _ in range(d):
    if tmp_b_ls == []:
        break
    money -= heapq.heappop(tmp_b_ls)
print(money)