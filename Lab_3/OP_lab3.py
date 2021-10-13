a=int(input("Enter a: "))
x=float(input("Enter x: "))

prev_sum, sum, epsilon, k = 0, 1, 0.00001, 1

while (abs(sum - prev_sum) > epsilon):
    prev_sum = sum
    curr_sum = 1
    for i in range(k):
        curr_sum *= (a - i) * x / (i + 1)

    sum += curr_sum
    k+=1
    print(" k = ",k,"\t|  sum = ","%.7f"%sum, sep="")