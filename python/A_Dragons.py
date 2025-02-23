# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid

s, n = map(int, input().split())
dragons = []
for _ in range(n):
    x, y = map(int, input().split())
    dragons.append((x, y))

dragons.sort()

for x, y in dragons:
    if s > x:
        s += y
    else:
        print("No")
        break
else:
    print("YES")
