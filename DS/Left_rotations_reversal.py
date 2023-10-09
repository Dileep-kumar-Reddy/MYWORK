def reverse(start: int, stop: int, arr: list) -> None:
    while start < stop:
        arr[start], arr[stop] = arr[stop], arr[start]
        start += 1
        stop -= 1


def rotate_array(array: list, rotations: int) -> None:
    # Reverse the first part up to the number of rotations
    reverse(0, rotations - 1, array)
    # Reverse the remaining part of the array
    reverse(rotations, len(array) - 1, array)
    # Reverse the entire array
    reverse(0, len(array) - 1, array)


array = list(map(int, input("Enter array: ").split()))
rotations = int(input("Enter no. of rotations: "))

rotate_array(array, rotations)

print("Rotated array:", array)
