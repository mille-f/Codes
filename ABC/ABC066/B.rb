s = gets.chomp!

while s.size > 0 do
  s.chop!
  if s.size.even?
    a = s.scan(/.{1,#{s.size/2}}/)
    if a[0] == a[1]
      break
    end
  end
end

p s.size
