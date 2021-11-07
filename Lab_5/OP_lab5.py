import math
def prime_check(num):
    divisor = 2
    while num % divisor != 0 and divisor**2 <= num:
        divisor += 1
    return divisor**2 > num
        
    
n = int(input("Enter n: "))
for i in range(2,int(math.log2(n+1))+1):
    if(prime_check(i)):
        mers_numb = 2**i - 1
        if(prime_check(mers_numb)):
            print(mers_numb)
