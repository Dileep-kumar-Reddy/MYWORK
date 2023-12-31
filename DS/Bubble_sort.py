def Bubble_sort(arr: list, n: int) -> list:
    for i in range(n):
        for j in range(0, n-i):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr


arr = list(map(int, input().split()))
print(*(Bubble_sort(arr, len(arr)-1)))
# 64, 34, 25, 12, 22, 11, 90
