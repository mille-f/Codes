n, a, b = gets.split.map(&:to_i)
sum = 0

for i in a..n do
  d = i.to_s.split("").map {|m| m.to_i}.inject(:+)
  if d >= a && d <= b
    sum += i
  end
end

puts sum
