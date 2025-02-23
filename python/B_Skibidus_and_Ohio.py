def min_length(s):
    return len(set(s))

t = int(input())
for _ in range(t):
    s = input().strip()
    print(min_length(s))
