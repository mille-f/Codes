n = gets.to_i
a = gets.split.map(&:to_i)
cnt = 0

n.times do |i|
  while a[i].even? || a[i]%3 == 2
    a[i] -= 1
    cnt += 1
  end
end

puts cnt
