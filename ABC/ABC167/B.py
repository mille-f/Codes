a, b, c, k = map(int, input().split())
ans = 0

if a >= k:
    ans = k
elif a + b >= k:
    ans += a
else:
    k -= a+b
    ans += a-k

print(ans)