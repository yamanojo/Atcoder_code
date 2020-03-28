L, R = map(int,input().split(" "))

m = 2018

if R-L>=2019:
    print(0)
    exit()

for l in range(L,R):
    for r in range(l+1,R+1):
        m = min(m,l*r%2019)

print(m)



