
def solve(s, n) :
  ans = ""
  for i in range(1, n + 1) :
    ans += s
  print(ans)


# nguoi ta ko cho viet vao nhap xuat
s = input().split()
st = s[0]
n = int(s[1])
solve(st, n)
