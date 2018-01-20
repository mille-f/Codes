n = gets.chomp.to_i
a = gets.split(" ").map(&:to_i)
cnt = 0

while a.count { |i| i % 2 == 0 } == n do
  a.map! { |m| m / 2 }
  cnt += 1
end

p cnt
