a = gets.to_i
b = gets.to_i
c = gets.to_i
x = gets.to_i
cnt = 0

x /= 50

for i in 0..a do
  for j in 0..b do
    for k in 0..c do
      if 10*i+2*j+k == x then
        cnt += 1
      end
    end
  end
end

puts cnt
