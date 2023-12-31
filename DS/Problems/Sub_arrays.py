def sub_array(arr: list, n: int) -> None:
    for i in range(0, n):  # start
        for j in range(i, n):  # end
            for k in range(i, j + 1):  # elements between start and end
                print(arr[k], end=" ")
            print("\n")


array = list(map(int, input("Enter array:").split()))
sub_array(array, len(array))
