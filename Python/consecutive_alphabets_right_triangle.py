n = int(input("Enter no.of lines:"))
x = 97
for i in range(1, n+1):
    for j in range(1, i+1):
        print(chr(x), sep='', end='')
        x = x+1
    print('\n')
    x = 97
