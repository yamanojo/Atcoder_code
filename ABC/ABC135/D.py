s = input()

10
20
30
40



ind =1
n = 100
for i in range(n):
    while 10^n > ind*13:
        ind += 1
    ind -= 1
    print("{}:{}".format(ind,ind*13))