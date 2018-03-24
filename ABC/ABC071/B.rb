s = gets.chomp!
a = [*'a'..'z']
n = Array.new(26, 0)
h = Hash[*[a,n].transpose.flatten]
flag = false

s.each_char {|c| h[c] += 1 }
h.each do |k,v|
  if v == 0
    puts k
    flag = true
    exit
  end
end

puts "None" if flag == false
