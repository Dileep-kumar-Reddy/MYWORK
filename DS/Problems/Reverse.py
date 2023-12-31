def reverse(arr: list, n: int) -> list:
    n = n // 2
    i = 0
    while n:
        arr[i], arr[-(i + 1)] = arr[-(i + 1)], arr[i]
        i += 1
        n -= 1
    return arr


array = list(map(int, input("Enter array:").split()))
print(reverse(array, len(array)))
