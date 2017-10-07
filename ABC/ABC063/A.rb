arr = gets.chomp.split(" ").map { |m| m.to_i }

sum = arr.inject(:+)

if sum < 10
  puts sum
else
  puts "error"
end
