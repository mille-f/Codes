x, y = map(int, input().split())

turu = (4*x-y)//2

if (turu < 0) or (2*x > y):
    print("No")
    exit()

if ((y-turu*2) % 4 == 0):
    print("Yes")
else:
    print("No")
