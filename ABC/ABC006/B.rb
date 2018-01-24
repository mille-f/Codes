n = gets.to_i
a = [0,0,1]

for i in 3..n-1 do
  a[i] = (a[i-1]+a[i-2]+a[i-3])%10007
end

puts a[n-1]
