w = list(input())
l = ["a", "i", "u", "e", "o"]
ans = []

for i in w:
    if not i in l:
        ans.append(i)

print(''.join(ans))