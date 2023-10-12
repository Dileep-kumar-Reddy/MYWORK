def InterpolationSearch(start: int, end: int, arr: list, key: int) -> int:
    while start < end:
        pos = int(
            start + ((end - start) - (arr[end] - arr[start])) * (key - arr[start])
        )
        if arr[pos] == key:
            return pos + 1
        elif arr[pos] > key:
            return InterpolationSearch(0, pos - 1, arr, key)
        elif arr[pos] < key:
            return InterpolationSearch(pos + 1, len(array) - 1, arr, key)
    return -1


array = list(map(int, input("Enter the arra:").split()))
key = int(input("Enter the key:"))
print(InterpolationSearch(0, len(array) - 1, array, key))
