def LinearSearch(start: int, stop: int, arr, key: int) -> int:
    for i in range(start, stop + 1, 1):
        if arr[i] == key:
            return i + 1
    return -1


def JumpSearch(arr: list, key: int, m: int) -> int:
    for i in range(m + 1):
        outerbound = (i + 1) * m
        if outerbound > len(arr):
            outerbound = len(arr) - 1
        if arr[i * m] <= key <= arr[outerbound]:
            return LinearSearch(i * m, outerbound, arr, key)
    return -1


array = list(map(int, input("Enter the array:").split()))
key = int(input("Enter the key:"))
m = int(input("Enter block size:"))
print(JumpSearch(array, key, m))
