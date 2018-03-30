s = gets.chomp!
ans = ""

s.each_char.with_index(1) do |c, i|
  ans += c if i%2 == 1
end

puts ans
