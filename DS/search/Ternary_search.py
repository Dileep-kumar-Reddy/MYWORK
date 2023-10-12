def TernrySearch(l: int, r: int, arr: list, key: int) -> int:
    Mid_1 = l + (r - 1) / 3
    Mid_2 = r - (r - 1) / 3
    if arr[Mid_1] == key:
        return Mid_1
    elif arr[Mid_2] == key:
        return Mid_2
    elif arr[Mid_1] > key:
        return TernrySearch(0, Mid_1, arr, key)
    elif arr[Mid_2] < key:
        return TernrySearch(Mid_2 + 1, len(arr), arr, key)
    elif arr[Mid_1 + 1] < key < arr[Mid_2 - 1]:
        return TernrySearch(Mid_1 + 1, Mid_2 - 1, arr, key)
    return -1


array = list(map(int, input("Enter the array:").split()))
key = int(input("Enter the array:"))
print(TernrySearch(0, len(array) - 1, array, key))
