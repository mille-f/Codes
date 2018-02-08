n = gets.chomp.to_i
hh, mm, ss = 0, 0, 0

if n >= 3600
  hh = n/3600
  n -= 3600*hh
  if n >= 60
    mm = n/60
    n -= 60*mm
    ss = n
  end
end

if n < 3600 && n >= 60
  mm = n/60
  n -= 60*mm
  ss = n
end

if n < 60
  ss = n
end

puts sprintf("%02d:%02d:%02d", hh, mm, ss)
