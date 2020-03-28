N = int(input())
d_ls = list(map(int, input().split(" ")))

h = N//2

d_sorted = sorted(d_ls)
h_low = d_sorted[h-1]
h_high = d_sorted[h]


print(h_high - h_low)