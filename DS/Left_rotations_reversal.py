def reverse(start: int, stop: int, arr: list) -> list:
    while start < stop:
        arr[start], arr[stop] = arr[stop], arr[start]
        start += 1
        stop -= 1
    return arr


array = list(map(int, input("Enter the array:").split()))
d = int(input("Enter the rotations:"))
reverse(0, d-1, array)
reverse(d, len(array)-1, array)
print(reverse(0, len(array)-1, array))
