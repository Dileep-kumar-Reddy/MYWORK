array = list(map(int, input("Enter the array:").split()))
d = int(input("Enter the no.of left rotations:"))
n = len(array)
while d:
    temp = array[0]
    for i in range(n-1):
        array[i] = array[i+1]
    array[-1] = temp
    d -= 1
print(array)
