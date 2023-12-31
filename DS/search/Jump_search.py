from math import sqrt


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
print(JumpSearch(array, key, int(sqrt(len(array))) + 1))
