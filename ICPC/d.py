def count1(a, x):
    cnt = 0
    for i in a:
        if i == x:
            cnt +=1
    return cnt

    
res = 0
n = int(input())
s = input()
s2 = set(s)
for i in s2:
    j = count1(s, i)
    print(j)
    res += 1/2 * j * j - 1/2 * j - ( n - 1) 
print(res)