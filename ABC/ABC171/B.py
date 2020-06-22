n, k = map(int, input().split())
p = list(map(int, input().split()))

p2 = sorted(p)
ans = 0

for i in range(len(p2)):
    ans += p2[i]
    if i == k-1:
        break

print(ans)
