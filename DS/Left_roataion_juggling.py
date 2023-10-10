import math


def rotate(arr, k, n):
    for i in range(math.gcd(n, k)):
        j = i
        temp = arr[i]
        while 1:
            d = (j+k) % n
            if d == i:
                break
            arr[j] = arr[k]
            j = d
        arr[j] = temp
    print(arr)


array = list(map(int, input("Enter the array:").split()))
k = int(input("Enter no.of rotations:"))
rotate(array, k, len(array))
