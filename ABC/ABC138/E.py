s = input()
t = input()

t_ls = sorted(set(t))

c_dict = {}
    
# 重複を調べる。
for c in t_ls:
    if c not in s:
        print(-1)
        exit()
ind = 0
loop = 0

for c in t:
    try:
        i = s[ind+1:].index()
        ind = i
    except ValueError:
        ind = 0
        loop += 1
        i = s[ind+1:].index()
        ind = i


print(loop*len(s)+ind+1)

