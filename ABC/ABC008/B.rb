n = gets.to_i
h = Hash.new(0)

n.times do
  s = gets.chomp
  h[s] += 1
end

puts h.max{|x,y| x[1] <=> y[1]}[0]
