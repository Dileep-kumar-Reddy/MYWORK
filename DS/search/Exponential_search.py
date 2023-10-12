def Binarysearch(start: int, stop: int, arr: list, key: int) -> int:
    while start <= stop:
        mid = (start + stop) // 2
        if arr[mid] == key:
            return mid + 1
        elif arr[mid] > key:
            stop = mid - 1
        elif arr[mid] < key:
            start = mid + 1
    return -1


def ExponentialSearch(arr: list, key: int):
    if arr[0] == key:
        return 1
    else:
        i = 1
        while i < len(arr) - 1 and arr[i] <= key:
            i = i * 2
        return Binarysearch(i // 2, min(i, len(arr) - 1), arr, key)


array = list(map(int, input("Enter the array:").split()))
key = int(input("Enter the key:"))
print(ExponentialSearch(array, key))
