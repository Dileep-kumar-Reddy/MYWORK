def reverse(start: int, stop: int, arr: list) -> None:
    while start < stop:
        arr[start], arr[stop] = arr[stop], arr[start]
        start += 1
        stop -= 1


def rotate_array(array: list, rotations: int) -> None:
    reverse(-1, -(rotations), array)
    reverse(-rotations-1, 0, array)
    reverse(0, len(array) - 1, array)


array = list(map(int, input("Enter array: ").split()))
rotations = int(input("Enter no. of rotations: "))

rotate_array(array, rotations)

print("Rotated array:", array)
