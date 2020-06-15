x, y = map(int, input().split())

#turu = (4*x-y)//2

# if (turu < 0) or (2*x > y):
#    print("No")
#    exit()

# if ((y-turu*2) % 4 == 0):
#    print("Yes")
# else:
#    print("No")

ans = "No"
for c in range(x+1):
    t = x-c
    if 2*c + 4*t == y:
        ans = "Yes"
        break

print(ans)
