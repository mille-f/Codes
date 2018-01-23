n = gets.to_i
arr = [[0,0,0]]

n.times do
  t, a, b = gets.split.map(&:to_i)
  arr << [t,a,b]
end

i = 0
n.times do
  dt = arr[i+1][0]-arr[i][0]
  d = (arr[i][1]-arr[i+1][1]).abs + (arr[i][2]-arr[i+1][2]).abs

  unless d <= dt && (dt%2 == d%2) then
    puts "No"
    exit
  end
  i += 1
end

puts "Yes"
