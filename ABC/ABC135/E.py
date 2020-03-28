'''
K*n = (X+Y)+2*muda
K=1 -> ok
k=2 -> ok
k= 4 -> 場合による

muda が変数として考えると、右辺がKの倍数になりますか？という問題
Kが偶数かつX+Yも偶数→行ける（両辺２で割る）
Kが奇数かつX+Yも奇数→いける（両辺２で割る）
Kが偶数かつX+Yは奇数→無理

解けそう…！




'''


K = int(input())

X,Y = map(int,input().split(" "))

S_xy = X+Y
if S_xy%2 == K%2:
    print(-1)
elif S_xy % K == 0:
    x = 0
    y = 0
    if X < 0:
        K_x = -K
    else:
        K_x = K
    if Y < 0:
        K_y = -K
    else:
        K_y = K

    for i in range(S_xy//K):
        while(abs(x+K_x)<=abs(X)):
            x += K_x
            print("{} {}".format(x,y))
        if x != X:
            y = y + (K_x-abs(X-x))
            x = X
            print("{} {}".format(x,y))
        if Y==0:
            break
        while(y+K<=Y):
            y += K
            print("{} {}".format(x,y))
else:
    num = S_xy//K
    muda = (K - (S_xy % K))//2
    x = 0
    y = 0
    if X < 0:
        K_x = -K
    else:
        K_x = K
    if Y < 0:
        K_y = -K
    else:
        K_y = K

    for i in range(S_xy//K):
        while(abs(x+K_x)<=abs(X)):
            x += K_x
            print("{} {}".format(x,y))
        if x != X:
            y = y + (K_x-abs(X-x))
            x = X
            print("{} {}".format(x,y))
        if Y==0:
            break
        while(y+K<=Y):
            y += K
            print("{} {}".format(x,y))
