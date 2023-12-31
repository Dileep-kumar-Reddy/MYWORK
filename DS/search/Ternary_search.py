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
