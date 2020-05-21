n, k = map(int, input().split())
l = [0 for _ in range(n)]
ans = 0

for i in range(k):
    d = int(input())
    a = map(int, input().split())
    for j in a:
        l[j-1] += 1

for i in range(n):
    if l[i] == 0:
        ans += 1

print(ans)
