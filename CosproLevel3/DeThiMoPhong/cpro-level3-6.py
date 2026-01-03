
def solution(n) :
  i = 1
  s = 0
  while (i <= n) :
    if (i % 3 == 0) : 
      s += i
    i += 1
  return s
  
  
print(solution(1000))