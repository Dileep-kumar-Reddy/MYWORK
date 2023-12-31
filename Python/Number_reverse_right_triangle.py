n = int(input("Enter no.of lines:"))
for i in range(n, 0, -1):
    for j in range(1, i+1):
        print(n-i+1, end='', sep='')
    print('\n')
