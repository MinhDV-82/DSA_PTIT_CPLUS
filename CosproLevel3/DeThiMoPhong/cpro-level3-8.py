
def solution(n, arr) :
  maxValue = -101
  minValue = 101
  for i in arr :
     maxValue = max(maxValue, i)
     minValue = min(minValue, i)
     
  print(maxValue - minValue)

solution(7, [3,6, 2, 12, 8, 20])
  
