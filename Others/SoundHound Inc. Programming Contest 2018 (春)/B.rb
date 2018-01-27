n, l, r = gets.split.map(&:to_i)
a = []

a = gets.split(" ").map(&:to_i)

for i in 0..n-1 do
  if a[i] < l then a[i] = l
  elsif a[i] > r then a[i] = r
  end
end

puts a.join(" ")
