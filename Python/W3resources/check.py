""" Write a Python program to find a list of integers containing exactly four distinct values, such that no integer repeats twice consecutively among the first twenty entries"""
list=[1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4]
check_list=[]
check=True
for i in list:
    if i not in check_list:
        check_list.append(i)
for i in range(len(list)-1):
    if list[i]==list[i+1] :
        check=False
        break
print(check)       
    
