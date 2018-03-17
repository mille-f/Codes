n = gets.to_i
s = []
n.times do
  s << gets.chomp!
end

m = gets.to_i
t = []
m.times do
  t << gets.chomp!
end

h = Hash.new(0)
h2 = Hash.new(0)

s.each do |i|
  h[i] += 1
end

t.each do |i|
  h2[i] += 1
end

h3 = Hash.new(0)
a = h.keys & h2.keys
a.each do |i|
  h3[i] = h[i] - h2[i]
end

h4 = Hash.new(0)
b = (h.keys | h2.keys) - (h.keys & h2.keys)
b.each do |i|
  h4[i] = h[i] + h2[i]
end

h4.each do |k,v|
  h4.delete(k) if h2.include?(k)
end

ans = h.values.max if h3.size == 0
h3.each do |k,v|
  if v <= 0
    ans = h4.size != 0 ? h4.values.max : 0
  else
    ans = h3.values.max
  end
end

p ans
