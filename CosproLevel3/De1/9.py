
def solve(arr) :
  count = 0
  s = 0
  
  for i in arr :
    if i % 5 == 0 :
      count += 1
      s += i
      print(i, end = ' ')
  print()
  
  average = s / count

  
  print(f"{count} {s} {average:.1f}")
  
      
    
# nguoi ta ko cho viet vao nhap xuat
arr = map(int, input().split())
solve(arr)
