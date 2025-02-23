# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    max_sum = 0
    current = a[0]
    
    for i in range(1, n):
        if (a[i] > 0 and current > 0) or (a[i] < 0 and current < 0):
            current = max(current, a[i])
        else:
            max_sum += current
            current = a[i]
    
    max_sum += current
    print(max_sum)
