s = gets.chomp
t = gets.chomp

ss = s.split("").sort.join
tt = t.split("").sort.reverse.join

puts ss < tt ? "Yes" : "No"
