"""An element should be greater than the all right most elements then it is called LEADER of an array"""
import numpy as np

print("Enter the elements:", end="")
a = np.array(input().split(","), dtype="int32")
for i in range(np.size(a)):
    flag = 0
    for j in range(i + 1, np.size(a)):
        if a[i] > a[j]:
            flag += 1
        else:
            break
    if flag == np.size(a) - i - 1:
        print(a[i])
