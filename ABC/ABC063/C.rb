n = gets.to_i
s = n.times.map{ gets.to_i }
ans = s.inject(:+)
s2 = s.select {|i| i%10 != 0}

if s2.empty?
  ans = 0;
elsif ans % 10 == 0
  ans = ans - s2.min
end

p ans
