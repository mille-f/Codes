s = gets.chomp
arr = s.scan(/.{1,2}/)

puts arr[0] == arr[1] ? "Yes" : "No"
