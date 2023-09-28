import time


class LinearSearch:
    def __init__(self: object, arr: list, key: int) -> None:
        self.array = arr
        self.search_element = key

    def Searching(self) -> int:
        for i in self.array:
            if self.search_element == i:
                return i
        return -1


a = LinearSearch([10, 42, 5, 1, 4, 3], 4)
start_time = time.time()
print(a.Searching())
end_time = time.time()
print(end_time - start_time)
