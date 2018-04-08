a, b, k = gets.split.map(&:to_i)
arr = []

(a..b).each.with_index(0) do |e,i|
#   puts "#{i} #{a+i} #{b+i}"
  arr << a+i
  arr << b-i
  break if i == k-1
end

puts arr.sort!.uniq
