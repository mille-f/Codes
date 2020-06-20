x, n = map(int, input().split())
p = list(map(int, input().split()))

p.sort()

if n == 0:
    print(x)
else:
    for i in range(0, 100):
        if (x-i) not in p:
            print(x-i)
            exit()
        if (x+i) not in p:
            print(x+i)
            exit()
