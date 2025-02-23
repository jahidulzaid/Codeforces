# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid

def solve(n, x, arr):
    arr.sort()

    l = 0
    r = n - 1
    g = 0
    while l<=r:
        if arr[l] + arr[r] <= x:
            l += 1
        r = r -1
        g += 1
    return g

n, x = map(int, input().split())

arr = list(map(int, input().split()))

ans = solve(n, x, arr)

print(ans)






