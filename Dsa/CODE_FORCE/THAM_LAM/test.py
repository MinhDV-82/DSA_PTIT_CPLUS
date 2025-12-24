import math
n = int(input())
a = list(map(int, input().split()))

def nt(x) :
    i = 2
    while (i * i <= x) :
        if (x % i == 0) :
            return False
        i = i + 1
        
    return x >= 2
 
ant = []
for i in range(2, 10000, 1) :
    if (nt(i)) :
        ant.append(i)
   


res = 0
for i in a :

    for j in range(0, len(ant) - 1, 1) :

        if (ant[j] <= i and i <= ant[j + 1]) :
            tmp = min(abs(i - ant[j]), abs(i - ant[j + 1]))
        
            res = max(res, tmp)
        

print(res)

