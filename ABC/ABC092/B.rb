n = gets.to_i
d, x = gets.split.map(&:to_i)
a = []
sum = 0

n.times do
  a << gets.to_i
end

a.each do |ai|
  sum += (d-1)/ai + 1
end

p sum+x
