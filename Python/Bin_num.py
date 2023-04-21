x=int(input("Enter a number:"))
copy=x
bin_num=""
while x!=0:
    r=x%2
    bin_num=str(r)+bin_num
    x=x//2
print(bin_num)    