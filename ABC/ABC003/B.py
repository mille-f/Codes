s, t = input(), input()
l = list("atcoder")
flag = True

for i1, i2 in zip(s, t):
    if i1 == i2:
        continue
    elif i1 == '@':
        if i2 in l:
            continue
        else:
            flag = False
    elif i2 == '@':
        if i1 in l:
            continue
        else:
            flag = False
    else:
        flag = False

print("You can win" if flag else "You will lose")