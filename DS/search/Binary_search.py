import time


class BinarySearch:
    def __init__(self, arr: list, ele: int) -> None:
        self.array = arr
        self.key = ele

    def Searching(self) -> int:
        left = 0
        right = len(self.array) - 1
        while left <= right:
            mid = left + (right - left) // 2
            if self.array[mid] == self.key:
                return mid + 1 + 1
            elif self.key < self.array[mid]:
                right = mid - 1
            else:
                left = mid + 1
        return -1


a = BinarySearch([1, 3, 4, 5, 10, 42], 3)
start_time = time.time()
print(a.Searching())
end_time = time.time()
print("Execution time: {:.6f} seconds".format(end_time - start_time))
