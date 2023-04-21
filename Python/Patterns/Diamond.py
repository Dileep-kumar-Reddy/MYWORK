x=int(input("Enter no.of rows:"))
i=j=1
for i in range(x+1):
    for j in range(2*x):
        if j>=x-(i-1) and j<=x+(i-1):
            print('* ',end="")
        else:
            print('  ',end="")
    print("\n")
i=j=1
for i in range(x,0,-1):
    for j in range(2*x):
        if j>=x-(i-1) and j<=x+(i-1):
            print('* ',end="")
        else:
            print('  ',end="")
    print("\n");                           