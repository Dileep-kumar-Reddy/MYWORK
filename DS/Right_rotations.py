array = list(map(int, input("Enter the array:").split()))
d = int(input("Enter the no.of rotations:"))
n = len(array)
while d:
    temp = array[-1]
    for i in range(n-1, 0, -1):
        array[i] = array[i-1]
    array[0] = temp
    d -= 1

print(array)
# time complexicity O(n*d)
