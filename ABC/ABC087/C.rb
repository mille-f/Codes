n = gets.to_i
arr = []
arr << gets.split(" ").map(&:to_i)
arr << gets.split(" ").map(&:to_i)
max = 0

for i in 0..n-1 do
  l1 = arr[0][0..i].inject(:+)
  l2 = arr[1][i..-1].inject(:+)
  max = [l1+l2, max].max
end

puts max
