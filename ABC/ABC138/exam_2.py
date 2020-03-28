s = input()
t = input()

t_ls = sorted(set(t))
t_c = []
s_c = []
for c in t_ls:
    n = sum(x==c for x in t)
    t_c.append(n)
    n = sum(x==c for x in s)
    if n == 0:
        print(-1)
        exit()
    s_c.append(n)

tmp_x = 0
ind =[]
for i,t_num,s_num in zip(range(len(t_c)),t_c,s_c):
    if -(-t_num//s_num) > tmp_x:
        tmp_x = -(-t_num//s_num)
        ind = [i]
    elif -(-t_num//s_num) == tmp_x:
        ind.append(i)

num = []
c_ls = []
for i in ind:
    tmp_num = t_c[i]-s_c[i]*(tmp_x-1)
    c_ls.append(t_c[i])
    num.append(tmp_num)


ind = 0
for i,c in enumerate(c_ls):
    for s_i, s_c in enumerate(s):
        if s_c == c:
            num[i] -= 1
        if num[i] == 0:
            ind = max(ind,s_i)
            break

print(ind)
print(num)

print(tmp_x*len(s)+ind+1)





