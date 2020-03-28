N = int(input())

H_ls = list(map(int,input().split(" ")))

h_left = H_ls[0]-1

ans = "Yes"
for h in H_ls:
    if h_left < h:
        h-=1
    elif h_left > h:
        ans = 'No'
        break
    h_left = h

print(ans)
