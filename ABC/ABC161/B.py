n, m = map(int, input().split())
a = list(map(int, input().split()))

t = sum(a) / (4*m)
cnt = 0

for i in a:
    print(t)
    if i >= t:
        cnt += 1

print("Yes" if cnt >= m else "No")
