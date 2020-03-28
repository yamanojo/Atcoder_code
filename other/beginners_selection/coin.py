A = int(input())
B = int(input())
C = int(input())
X = int(input())

unit_num = X//50

max_a = min(unit_num//10, A)

pattern_num = 0

if C==0 and unit_num%2 == 1:
    print(0)

else:
    for a in range(max_a+1):
        if a*10 + B*2 + C < unit_num:
            continue

        max_b = min((unit_num-a*10)//2, B)
        min_b = max((unit_num-a*10-C +1)//2,0) # 繰り上げのため、1を足した
        tmp_pattern_num = (max_b-min_b)+1
        pattern_num += tmp_pattern_num

    print(pattern_num)

