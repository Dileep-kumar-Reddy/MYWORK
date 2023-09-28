class LinearSearch:
    def __init__(self: object, arr: list, key: int) -> None:
        self.array = arr
        self.search_element = key

    def Searching(self) -> int:
        for i in range(len(self.array)):
            if self.search_element == self.array[i]:
                return i
        return -1


a = LinearSearch([10, 42, 5, 1, 4, 3], 3)
print(a.Searching())
