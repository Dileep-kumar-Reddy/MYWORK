def LargestThree(arr):
    first = second = third = -1
    for i in arr:
        if i > first:
            third = second
            second = first
            first = i
        elif i > second and i != first:
            third = second
            second = i
        elif i > third and i != second:
            third = i
    print(first, second, third)


array = list(map(int, input("Enter the array:").split()))
LargestThree(array)
