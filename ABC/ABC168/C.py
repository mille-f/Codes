import math
import decimal

a, b, h, m = map(int, input().split())

l = 6*m
s = 30*h + 0.5*m
r = abs(l-s)
cos = math.cos(math.radians(r))
ans = ((a**2+b**2)-2*a*b*cos)**0.5

print('{:.21f}\n'.format(ans))
