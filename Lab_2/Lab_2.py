
a1=float(input("Enter coordinate X of the first vertex: "))
a2=float(input("Enter coordinate Y of the first vertex: "))

b1=float(input("Enter coordinate X of the second vertex: "))
b2=float(input("Enter coordinate Y of the second vertex: "))

c1=float(input("Enter coordinate X of the third vertex: "))
c2=float(input("Enter coordinate Y of the third vertex: "))
 
ab = ((a1 - a2)**2 + (b1 - b2)**2)**0.5
bc = ((b1 - b2)**2 + (c1 - c2)**2)**0.5
ac = ((a1 - a2)**2 + (c1 - c2)**2)**0.5

if ab == bc and bc == ac:
    result = "Triangle is equilateral"
elif ab == bc or bc == ac or ac == ab:
	result = "Triangle is isosceles"
else:
	result = "Triangle is versatile"
print(result)
