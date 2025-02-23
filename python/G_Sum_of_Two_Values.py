# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid

n, x = map(int, input().split())
arr = list(map(int, input().split()))
seen = {}
for i in range(n):
    comp = x - arr[i]
    if comp in seen:
        print(seen[comp] + 1, i + 1)
        break
    seen[arr[i]] = i
else:
    print(-1)
