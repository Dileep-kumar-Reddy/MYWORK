#Python program to print all Prime numbers in an Interval
def prime(z):
    for i in range(2,z // 2 + 1):
        if z % i == 0:
            return False
    return True

x=int(input("Enter lower bound of interval:"))
y=int(input("Enter upper bound of interval:"))
for i in range(x,y+1):
    if prime(i):
        print(i,end=" ",sep=" ")

