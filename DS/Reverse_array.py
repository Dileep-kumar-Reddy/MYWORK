array = list(map(int, input("Enter the array:").split()))
n = len(array)
for i in range(n//2):
    array[i], array[-(i+1)] = array[-(i+1)], array[i]
print(array)
