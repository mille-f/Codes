hw = gets.chomp.split(" ").map { |e| e.to_i }
arr = Array.new()

hw[0].times do
  arr << gets.chomp!
end

hw[0] += 2
hw[1] += 2

hw[0].times do |i|
  hw[1].times do |j|
    if i == 0 || i == hw[0]-1 then
      print "#"
    else
      if j == 0 || j == hw[1]-1 then
        print "#"
      elsif j == 1 then
        print  arr[i-1]
      end
    end
  end
  puts ""
end
