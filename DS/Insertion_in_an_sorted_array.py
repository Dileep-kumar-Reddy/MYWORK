def insertion(arr, pos, ele, n):
    i = n-1
    while i >= 0 and arr[i] > ele:
        arr[i+1] = arr[i]
        i -= 1
    arr[i+1] = ele
    print(arr)


array = list(map(int, input("Enter array:").split()))
n = len(array)
array.append(0)
pos = int(input("Enter position:"))
if pos > len(array):
    print("Insertion cant be possible")
    exit(0)
else:
    ele = int(input("Enter data to be inserted:"))
    insertion(array, pos, ele, n)
