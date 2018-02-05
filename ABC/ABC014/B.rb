n, x = gets.split.map(&:to_i)
a = gets.split(" ").map(&:to_i)
ans = 0

x.to_s(2).chars.reverse.each_with_index do |c, i|
  ans += a[i] if c == "1"
end

p ans
