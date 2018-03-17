n = gets.to_i
red = []
blue = []
cnt = 0

n.times do
  a, b = gets.split.map(&:to_i)
  red.push([a, b])
end

n.times do
  c, d = gets.split.map(&:to_i)
  blue.push([c, d])
end

blue.sort.each do |b|
  pair = red.select{|r| (r[0] < b[0]) && (r[1] < b[1])}
  next if pair.empty?
  blue.delete(b)
  red.delete(pair.sort_by{|r| r[1]}.last)
  cnt += 1
end

p cnt
