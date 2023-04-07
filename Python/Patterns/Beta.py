x=int(input("Enter number of rows:"))
for i in range(x+1):
    for j in range(i):
        print('*',end="")
    print("\n")
for i in range(x-1,0,-1):
    for j in range(i):
        print("*",end="")
    print("\n")            