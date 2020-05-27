n, m = map(int, input().split())
a = list(map(int, input().split()))

s = sum(a)
ans = n - s

print(ans if ans >= 0 else "-1")
