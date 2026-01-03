
def solution(n, arr) :
  sChan = 0
  sLe = 0
  for i in arr : 
    if i % 2 == 1 :
      sLe += i
      print(i, end = " ")
  print()
  for i in arr : 
    if i % 2 == 0 :
      sChan += i
      print(i, end = " ")
  
  print(f"{sLe} {sChan}")  
  

solution(9,[2 ,5, 1, 7, 9, 9, 4, 1, 2])
  
