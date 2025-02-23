# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid

n, m, a, b = map(int, input().split())
cost_single = n * a
cost_multi = ((n + m - 1) // m) * b
cost_combo = (n // m) * b + (n % m) * a
result = min(cost_single, cost_multi, cost_combo)
print(result)
