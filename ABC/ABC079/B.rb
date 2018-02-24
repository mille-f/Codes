n = gets.to_i
l = [2,1]

for i in 2..n do
  l[i] = l[i-1]+l[i-2]
end

puts l[n]
