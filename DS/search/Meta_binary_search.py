import math


def MetaBinarySearch(arr: list, key: int) -> int:
    n = len(arr)
    lg = int(math.log2(n - 1)) + 1
    pos = 0
    for i in range(lg - 1, -1, -1):
        if arr[pos] == key:
            return pos + 1
        new_pos = pos | 1 << i
        if new_pos < n and arr[new_pos] <= key:
            pos=new_pos
        
    return pos+1 if arr[pos]==key else -1


array = list(map(int, input("Enter the array:").split()))
key = int(input("Enter the key to search:"))
print(MetaBinarySearch(array, key))
