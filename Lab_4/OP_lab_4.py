import math
n=int(input("Enter n: "))
x=float(input("Enter x: "))
for i in range(1,n+1):
    print((x**i)/(math.factorial(2*i)))
