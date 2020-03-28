N,A,B = map(int, input().split(" "))

some_num = 0
for i in range(1,N+1):
    num_1 = i%10
    num_10 = i%100//10
    num_100 = i%1000//100
    num_1000 = i%10000//1000
    num_10000 = i//10000
    
    tmp_sum_num = num_1+num_10+num_100+num_1000+num_10000
    if tmp_sum_num>=A and tmp_sum_num<=B:
        some_num+=i

print(some_num)
