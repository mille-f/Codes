a, b, c, d = gets.split.map(&:to_i)

x = a+b
y = c+d

if x > y  then puts "Left" end
if x == y then puts "Balanced" end
if x < y  then puts "Right" end
