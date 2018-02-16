a, b = gets.split.map(&:to_i)
c = b/a

puts c*a < b ? c+1 : c
