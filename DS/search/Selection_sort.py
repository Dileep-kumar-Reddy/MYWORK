def SelctionSort(arr: list, n: int) -> list:
    for i in range(n):
        small = i
        for j in range(i+1, n):
            if arr[j] < arr[small]:
                small = j
        arr[i], arr[small] = arr[small], arr[i]
    return arr


arr = list(map(int, input("Enter the array:").split()))
print(*(SelctionSort(arr, len(arr))))
