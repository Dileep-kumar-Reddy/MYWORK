# sort an array in the form of 1,2---,n if the element is not present -1 will be placed
import numpy as np

# zero should be given as input
print("Enter elements:", end="")
a = np.array(input().split(","), dtype="int32")
x = np.max(a)
b = np.zeros(x, dtype="int")
for i in range(x):
    if b[i] != i + 1:
        if i + 1 in a:
            b[i] = i + 1
        else:
            b[i] = -1
print(b)
