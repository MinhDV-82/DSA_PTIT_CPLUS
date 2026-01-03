
def solution(n, arr) :
  i = 1
  while(i <= n) :
    print(arr[i - 1], end = " ")    
    i += 2
  
  print()
  i = 2
  while(i <= n) :
    print(arr[i - 1], end = " ")    
    i += 2
  

solution(7, [12, 4, 2, 10, 83, 6, 8])
  
