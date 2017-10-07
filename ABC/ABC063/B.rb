s = gets.chomp!

s1 = s.split("")
s2 = s.split("").uniq

if s1 == s2
  puts "yes"
else
  puts "no"
end
