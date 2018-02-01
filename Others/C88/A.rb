n = gets.to_i
str = ""

n.times do
  p, q, r = gets.split(" ")
  if p == "BEGINNING"
    str.concat(r[0])
  elsif p == "MIDDLE"
    str.concat(r[r.length/2])
  elsif p == "END"
    str.concat(r[-1])
  end
end

puts str
