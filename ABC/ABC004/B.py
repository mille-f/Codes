c = []

for i in range(4):
    c.append(input().split())

for l in c[::-1]:
    print(' '.join(l[::-1]))