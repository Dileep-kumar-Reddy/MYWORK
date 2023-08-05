import numpy as np

print("Enter elements:", end="")
a = np.array(input().split(","), dtype="int16")
x = np.max(a)
b = np.zeros(x, dtype="int16")
for i in range(x):
    if b[i] != i:
        if i in a:
            b[i] = i
        else:
            b[i] = -1
print(b)
