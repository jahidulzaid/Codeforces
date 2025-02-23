# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid

n, m = map(int, input().split())
for i in range(1, n + 1):
    if i % 4 == 1:
        print('#' * m)
    elif i % 4 == 3:
        print('#' * m)
    elif i % 4 == 0:
        print('#' * (m-1) + '#')
