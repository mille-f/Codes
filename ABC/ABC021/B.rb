n = gets.to_i
a, b = gets.split.map(&:to_i)
k = gets.to_i
p = gets.split(" ").map(&:to_i)
flag = p.size != p.uniq.size ? true : false

unless p.include?(a) || p.include?(b) || flag
  puts "YES"
else
  puts "NO"
end
