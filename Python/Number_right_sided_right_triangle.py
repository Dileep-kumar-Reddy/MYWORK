n = int(input("Enter no.of lines:"))
for i in range(1, n+1):
    for k in range(1, n-i+1):
        print(' ', sep='', end='')
    for j in range(1, i+1):
        print(i, sep='', end='')
    print('\n')
