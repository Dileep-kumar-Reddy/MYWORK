x=int(input("Enter no.of terms of series:"))
list=[0,1]
for i in range(2,x+1):
    temp=list[i-1]+list[i-2]
    list.append(temp)
print("Fibanacci series upto {} terms is:".format(x))
print(list)    