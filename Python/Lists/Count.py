n=int(input("Enter number of elements:"))
list=[]
for i in range(n):
    ele=input("Enter element:")
    list.append(ele)
key=input("Enter key element to count:")
print("%s appears %d times in the list"%(key,list.count(key)))   
