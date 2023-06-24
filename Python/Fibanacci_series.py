x=int(input("Enter no.of terms of series:"))
a,b=0,1
print(f'{a} {b} ',end='',sep='')
for i in range(x-2):
    a, b = b, a + b
    print(f'{b} ',end='',sep='')
