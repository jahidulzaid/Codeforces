# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid


n = int(input())
e = []
for _ in range(n):
    a, b = map(int, input().split())
    e.append((a, 1))
    e.append((b+1, -1))
e.sort()

mx_cus = 0
crt_cus = 0

for _, x in e:
    crt_cus += x
    mx_cus = max(mx_cus, crt_cus)


print(mx_cus)






