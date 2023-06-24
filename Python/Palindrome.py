import time
x=input("Enter a string:")
print("Checking whether it is a palindrome or not")
time.sleep(5)
y=len(x)//2
for i in range(0,y+1):
    if x[y-i]!=x[i+y]:
        print("{} is not a palindrome".format(x))
        exit()
print("{} is a palindrome".format(x))        
    
