a1 = float(input("Enter coefficient a1: "))
b1 = float(input("Enter coefficient b1: "))
c1 = float(input("Enter coefficient c1: "))

a2 = float(input("Enter coefficient a2: "))
b2 = float(input("Enter coefficient b2: "))
c2 = float(input("Enter coefficient c2: "))

determ = a1 * b2 - a2 * b1

if determ == 0:
    print("Determinant = 0")
    exit(0)

determ_x = c1 * b2 - c2 * b1
determ_y = a1 * c2 - a2 * c1

res_x = determ_x / determ
res_y = determ_y / determ

print("Result\n","x = ", res_x ,"\n","y = ", res_y, sep='')