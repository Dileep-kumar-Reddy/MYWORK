def SentinelLinearSearch(arr: list, key: int, n: int) -> int:
    last_ele = arr[-1]
    arr[-1] = key
    for i in range(n):
        if arr[i] == key:
            return i+1
    arr[-1] = last_ele
    if arr[-1] == key:
        return n
    return -1


array = list(map(int, input("Enter the array").split()))
key = int(input("Enter KEy value:"))
print(f'{key} is found at {SentinelLinearSearch(array,key,len(array))}')
