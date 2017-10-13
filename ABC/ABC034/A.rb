a = gets.chomp.split(" ")

x = a[0].to_i
y = a[1].to_i

if x < y
  puts "Better"
else
  puts "Worse"
end

