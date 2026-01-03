a, b = map(int, input("").split())
if a < b:
    print(f"{a} + {b} = {a + b}")
elif a > b:
    print(f"{a} - {b} = {a - b}")
else:
    print(f"{a} = {b}")