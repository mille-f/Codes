n = gets.to_i
s = []

n.times do
  s << gets.chomp
end

for i in 1..n do
  ans = ""
  for j in 1..n do
    j = n - j
    ans += s[j][i-1]
  end
  puts ans
end
