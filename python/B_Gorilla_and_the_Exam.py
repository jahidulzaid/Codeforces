t = int(input())
results = []

for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    if k == 0:
        # Count the distinct blocks
        distinct_blocks = 1
        for i in range(1, n):
            if a[i] != a[i - 1]:
                distinct_blocks += 1
        results.append(distinct_blocks)
    else:
        # If k > 0, we can always reduce to 1 block
        results.append(1)

print("\n".join(map(str, results)))
