N = int(input())
a_ls = list(map(int,input().split(" ")))

a_ls.sort(reverse= True)
p1_sum = sum(a_ls[::2])
p2_sum = sum(a_ls[1::2])

print(p1_sum - p2_sum)