a = gets.to_i
b = gets.to_i
c = gets.to_i
d = gets.to_i
sum = 0

sum += a <= b ? a : b
sum += c <= d ? c : d

puts sum
