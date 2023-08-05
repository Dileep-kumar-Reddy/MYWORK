# tells by how many steps the array is rotated
lst = list(map(int, input("Enter the rotated sorted array:").split(",")))
print(lst)
i = 1
while lst[0] < lst[i]:
    i += 1
print("Rotation count is", i)
