a, b = gets.split.map(&:to_i)
cnt = 0

for i in a..b do
  if i.to_s[0,2] == i.to_s[3,2].reverse!
    cnt += 1
  end
end

puts cnt
