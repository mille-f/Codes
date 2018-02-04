s = gets.chomp
n = gets.to_i

n.times do
  l, r = gets.split.map(&:to_i).map {|m| m-1}
  s = s.slice(l..r).reverse + s[r+1..-1] if l == 0
  s = s[0..l-1] + s.slice(l..r).reverse + s[r+1..-1] if l != 0
end

puts s
