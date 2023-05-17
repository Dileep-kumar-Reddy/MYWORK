'''n+nn+nnn'''
x=input("Enter a number:")
y=int(input("Enter no.of terms"))
s=0
for i in range(1,y+1):
    print(x*i)
    s=s+int(x*i)
print(s)