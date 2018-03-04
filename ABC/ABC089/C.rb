n = gets.to_i
h = Hash.new (0)
a = ['M', 'A', 'R', 'C', 'H']

n.times do
  h[gets.chomp![0]] += 1
end

cnt = a.combination(3).map do |i, j, k|
  h[i] * h[j] * h[k]
end.inject(:+)

p cnt
