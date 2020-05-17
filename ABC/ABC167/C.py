n, m, x = map(int, input().split())
c = [list(map(int, input().split())) for _ in range(n)]
ans = 9**9
flag = False

for i in range(2**n):
    cost = 0
    a = [0]*m
    for j in range(n):
        if (i >> j) & 1:
            cost += c[j][0]
            for k in range(m):
                a[k] += c[j][k+1]
    if min(a) >= x:
        flag = True
        ans = min(ans, cost)

print(ans if flag else -1)
