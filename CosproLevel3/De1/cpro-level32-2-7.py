
def solve(st, c) :
  ans = ""
  for i in st :
    if i != c :
      ans += i
  print(ans)


# nguoi ta ko cho viet vao nhap xuat
s = input().split()
st = s[0]
c = s[1]
solve(st, c)
