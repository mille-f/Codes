arr = []
a = [0]
b = []

3.times do
  arr << gets.split(" ").map(&:to_i)
end

for i in 0..2 do
  b << arr[0][i] - a[0]
end
for i in 1..2 do
  a << arr[i][0] - b[0]
end

for i in 0..2 do
  for j in 0..2 do
    unless arr[i][j] == a[i] + b[j]
      puts "No"
      exit
    end
  end
end

puts "Yes"
