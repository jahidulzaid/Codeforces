# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid

n = int(input())
movies = []

for _ in range(n):
    start, end = map(int, input().split())
    movies.append((start, end))


def sortTubple(item):
    return item[1]

movies.sort(key=sortTubple)

count = 0
last_end_time = 0

for start, end in movies:
    if start >= last_end_time:
        count += 1
        last_end_time = end

print(count)