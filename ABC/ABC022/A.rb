n, s, t = gets.split.map(&:to_i)
w = gets.to_i
w >= s && w <= t ? cnt = 1 : cnt = 0

(n-1).times do
  w += gets.to_i
  if w >= s && w <= t then cnt += 1 end
end

puts cnt
