n = gets.to_i
a = []

n.times do
  a << gets.to_i
end

p n-a.uniq.size
