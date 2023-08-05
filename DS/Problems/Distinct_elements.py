import numpy as np

print("Enter elements:", end="")
a = np.array(input().split(","), dtype="int32")
dis_ele = []
for i in a:
    if i not in dis_ele:
        dis_ele.append(i)
print(dis_ele)
