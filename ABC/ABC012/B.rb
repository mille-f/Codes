n = gets.chomp.to_i
hh, mm, ss = n/3600, (n/60)%60, n%60

puts sprintf("%02d:%02d:%02d", hh, mm, ss)
