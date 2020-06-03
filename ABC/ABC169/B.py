n = int(input())
a = list(map(int, input().split()))

inf = 10**18
ans = 1

sorted(a, reverse=True)
if 0 in a:
    print(0)
    exit()
else:
    for i in a:
        ans *= i
        if ans > inf:
            print(-1)
            exit()

print(ans)
