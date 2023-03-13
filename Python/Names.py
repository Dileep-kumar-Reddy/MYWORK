# Write a Python program that accepts the user's first and last name and prints them in reverse order with a space #between them
first_name=input("Enter first name:")
last_name=input("Enter last name:")
con=first_name+last_name
print(len(con))
for i in range(len(con)-1,-1,-1):
    if(i==len(last_name)):
        print(" ",end="")
    print(con[i],end="")



