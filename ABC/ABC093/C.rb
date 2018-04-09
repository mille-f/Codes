a, b, c = gets.split.map(&:to_i)
m = [a,b,c].max

if m%2 == 0 && (a+b+c)%2 == 0
  puts (3*m-(a+b+c))/2.floor
elsif m%2 == 1 && (a+b+c)%2 == 1
  puts (3*m-(a+b+c))/2.floor
else
  m+=1
  puts (3*m-(a+b+c))/2.floor
end
