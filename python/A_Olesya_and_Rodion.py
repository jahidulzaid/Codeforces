# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid

n, t = map(int, input().split())
start = 10**(n - 1)

while start % t != 0:
    start += 1

if len(str(start)) == n:
    print(start)
else:
    print(-1)
