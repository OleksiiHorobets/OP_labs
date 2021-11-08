import math

def is_positive(n):
    return n>0

def input_float(str):
    num = float(input(str))
    return num

def e_pow_x_taylor_with_accuracy(x, epsilon):
    curr_ex_sum = 1
    prev_ex_sum = 0
    counter = 1
    while(abs(curr_ex_sum-prev_ex_sum)>epsilon):
        prev_ex_sum = curr_ex_sum
        curr_ex_sum += calculate_member(x, counter)
        counter+=1
    return curr_ex_sum

def calculate_member(x, counter):
    res = 1
    for i in range(1, counter+1):
        res *= num_x / i    
    return res

x = input_float("Enter x: ")
epsilon = input_float("Enter accuracy: ")
if(is_positive(x)):
    num_x = math.atan(x)
    print(e_pow_x_taylor_with_accuracy(num_x, epsilon))
else:
    num_x = x * x
    print(e_pow_x_taylor_with_accuracy(num_x, epsilon)+1)

