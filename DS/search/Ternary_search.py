<<<<<<< HEAD
class TernarySearch:
    def __init__(self, arr: list) -> None:
        self.array = arr

    def Search(self: object, l: int, r: int, key: int) -> int:
        if r >= 1:
            mid_1 = l + (r - 1) // 3
            mid_2 = r - (r - 1) // 3
            if self.array[mid_1] == key:
                return mid_1
            elif self.array[mid_2] == key:
                return mid_2
            else:
                if self.array[mid_1] > key:
                    return TernarySearch(self, l, mid_1 - 1, key)
                elif self.array[mid_2] < key:
                    return TernarySearch(self, mid_2 + 1, r, key)
                else:
                    return TernarySearch(self, mid_1 + 1, mid_2 - 1, key)
        return -1


a = TernarySearch([1, 2, 3, 4, 5, 6, 7])
a.Search(0, 7, 8)
=======
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
>>>>>>> 0110006a623e82526ca70a7bae3e837946576fe7
