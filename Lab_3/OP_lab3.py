a=int(input("Enter a: "))
x=float(input("Enter x: "))

prev_sum, curr_val, sum, epsilon, k = 0, 1, 1, 0.00001, 1

while (abs(sum - prev_sum) > epsilon):
    prev_sum = sum
    curr_val*= (a - k + 1) * x / k
    sum += curr_val
    k+=1
    print(" k = ",k,"\t|  sum = ","%.7f"%sum, sep="")