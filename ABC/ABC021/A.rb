n = gets.to_i

puts n.to_s(2).chars.count("1")
n.to_s(2).reverse.chars.each_with_index { |c, i|
  puts 2 ** i if c == "1"
}
