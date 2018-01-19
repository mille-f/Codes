s = gets.chomp
cnt = 0
s.split("").each do |i|
  if i == "1" then cnt += 1 end
end

puts cnt
