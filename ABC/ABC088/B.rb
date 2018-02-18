gets
a = gets.split(" ").map(&:to_i)

alice = a.sort.reverse!.select.with_index{|n, i| i%2 == 0}.inject(:+)
bob = a.sort.reverse!.select.with_index{|n, i| i%2 == 1}.inject(:+)

puts alice - bob
