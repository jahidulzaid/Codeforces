n,m,k = map(int, input().split())


desire_sz = list(map(int, input().split()))


apt_sz = list(map(int, input().split()))

cnt = 0

accept_sz = set()


for x in desire_sz:
    for a in apt_sz:
        if x - k == a or x == a or x+k == a:
            cnt += 1
            accept_sz.add(a)
            break


print(len(accept_sz))
# print(cnt)
        
        