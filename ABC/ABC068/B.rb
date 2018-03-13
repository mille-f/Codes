n = gets.to_i
ans = 1

for i in 0..6 do
  if 2**(6-i) <= n
    ans = 2**(6-i)
    break
  end
end

puts ans
