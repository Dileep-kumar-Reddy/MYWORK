def BinarySearch(arr: list, key: int, start: int, stop: int) -> int:
    while start <= stop:
        mid = (start + stop) // 2
        if arr[mid] == key:
            return mid + 1
        elif arr[mid] > key:
            stop = mid - 1
        elif arr[mid] < key:
            start = mid + 1
    return -1


array = list(map(int, input("Enter the array:").split()))
key = int(input("Enter key value:"))
print(BinarySearch(array, key, 0, len(array) - 1))
