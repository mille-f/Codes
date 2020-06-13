n, k, m = map(int, input().split())
a = list(map(int, input().split()))

s = sum(a)
c = n*m-s

if c < 0:
    print(0)
elif c > k:
    print(-1)
else:
    print(c)
