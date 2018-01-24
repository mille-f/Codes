n = gets.to_i
a = [0,0,1]

i = 3
while i < n do
  a << a[i-1]+a[i-2]+a[i-3]
  i += 1
end

puts a[n-1]%10007
