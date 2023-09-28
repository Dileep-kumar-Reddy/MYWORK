arr_1 = list(map(int, input().split()))
arr_2 = list(map(int, input().split()))
arr_3 = list(map(int, input().split()))
common_elements=set(arr_1+arr_2+arr_3)
for i in common_elements:
    if i in arr_1 and i in arr_2 and i in arr_3:
        print(i,sep=' ',end=' ')