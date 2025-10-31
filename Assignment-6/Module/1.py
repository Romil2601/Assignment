# 1. Write a Python program to demonstrate the use of functions from the math module.
import math
num = 16
sqrt_result = math.sqrt(num)
print(f"The square root of {num} is {sqrt_result}")

fact_num = 5
fact_result = math.factorial(fact_num)
print(f"The factorial of {fact_num} is {fact_result}")

base = 2
exponent = 3
pow_result = math.pow(base, exponent)
print(f"{base} raised to the power of {exponent} is {pow_result}")


# 2. Write a Python program to generate random numbers between 1 and 100 using the random module.
import random
random_number = random.randint(1, 100)
print(f"Random number between 1 and 100: {random_number}")