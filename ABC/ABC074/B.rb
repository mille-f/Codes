n = gets.to_i
k = gets.to_i
x = gets.split.map(&:to_i)
ans = 0

x.each do |e|
  ans += [e, k-e].min
end

puts ans*2
