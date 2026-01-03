


def solve(n, arr) :
  cnt = [0] * (n + 5)
  for x in arr :
    tmp = x
    if (x == 0) : 
      cnt[0] += 1 
      
    while(tmp != 0) :
      du = tmp % 10
      tmp //= 10
      cnt[du] += 1
  
  for i in range(10) :
    print(cnt[i], end = ' ')
      
    
# nguoi ta ko cho viet vao nhap xuat
n = int(input())
arr = map(int, input().split())
solve(n, arr)
