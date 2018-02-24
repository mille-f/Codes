gets
l = gets.split.map(&:to_i)
sum = 0

l.sort!.each.with_index do |e,i|
  sum += e if i % 2 == 0
end

puts sum
