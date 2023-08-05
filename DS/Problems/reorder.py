ele = list(map(int, input("Enter elements:").split(",")))
indices = list(map(int, input("Enter indices:").split(",")))
ordered = []
for i in range(max(indices) + 1):
    pos = -1
    for j in range(max(indices) + 1):
        if indices[j] == i:
            pos = j
            ordered.append(ele[pos])
            break

print(ordered)
