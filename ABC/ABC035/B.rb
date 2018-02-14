s = gets.chomp!
t = gets.to_i
x, y = 0, 0
cnt = 0

s.each_char {|c|
  if c == "U"
    y += 1
  elsif c == "D"
    y -= 1
  elsif c == "L"
    x -= 1
  elsif c == "R"
    x += 1
  else
    cnt += 1
  end
}

if t == 1
  puts x.abs + y.abs + cnt
else
  puts [s.length%2, x.abs + y.abs - cnt].max
end

