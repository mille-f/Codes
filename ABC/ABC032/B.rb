s = gets.chomp
k = gets.to_i

puts s.chars.each_cons(k).map(&:join).uniq.size
