n = gets.to_i
a = []

n.times do |i|
  a << gets.to_i
end

puts a.sort.uniq.size
