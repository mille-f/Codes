h, w = gets.split.map(&:to_i)
s = []

h.times do
  s << gets.chomp
end

for i in 0...h
  for j in 0...w
    count = 0
    if s[i][j] == "#" then next end
    for dx in -1..1
      for dy in -1..1
        next_x = dx + i
        next_y = dy + j
        if next_x >= 0 && next_x < h && next_y >= 0 && next_y < w
          count += s[next_x][next_y] == "#" ? 1 : 0
        end
      end
    end
    s[i][j] = count.to_s
  end
end

puts s
