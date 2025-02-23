# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid


n = int(input())
arr = list(map(int, input().split()))
max_sum = float('-inf')
current_sum = 0

for x in arr:
    current_sum = max(x, current_sum + x)
    max_sum = max(max_sum, current_sum)

print(max_sum)