s = input()
max_ind = len(s)-1
count_l = 0
count_r = 0
tmp_ind = 0
last_ind = -1
key_ind = 0
flag = True
text = ""

for i,c in enumerate(s):
    if flag == True:     
        if c == "R":
            count_r+=1
        else:
            flag = False
            key_ind = i
            count_l = 1
    else:
        if c == "L":
            count_l += 1
        else:
            for i in range((key_ind-2)-last_ind):
                text += "0 "
            left = (count_r+1)//2 + count_l//2
            right = count_r//2 + (count_l+1)//2
            text += "{} ".format(left)
            text += "{} ".format(right)
            last_ind = key_ind
            # ここで処理をしてしまう。
            count_r = 1
            flag = True

for i in range((key_ind-2)-last_ind):
    text += "0 "
left = (count_r+1)//2 + count_l//2
right = count_r//2 + (count_l+1)//2
text += "{} ".format(left)
text += "{} ".format(right)

for i in range(max_ind-key_ind):
    text += "0 "


print(text[:-1])
