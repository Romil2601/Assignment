# 1. Write a Python program to create a function that takes a string as input and prints it.
def prt_str(str):
    print(str)
prt_str("Hello, World!")

# 2. Write a Python program to create a calculator using functions.
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))
choice = input("Enter operation (+, -, *, /): ")
def calculator(n1, n2, op):
    if op == '+':
        return n1 + n2
    elif op == '-':
        return n1 - n2
    elif op == '*':
        return n1 * n2
    elif op == '/':
        return n1 / n2
    else:
        return "Invalid operation"

result = calculator(num1, num2, choice)
print("Result: ", result)

# 3. Write a Python program to create a parameterized function that takes two arguments and prints their sum.
def print_sum(a, b):
    print("Sum:", a + b)
print_sum(5, 10)

# 4. Write a Python program to create a lambda function with one expression.
square = lambda x: x ** 2
num = int(input("Enter a number: "))
result = square(num)
print(f"The square of {num} is {result}")


# 5. Write a Python program to create a lambda function with two expression.
add = lambda x, y: x + y
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
result = add(num1, num2)
print(f"The sum of {num1} and {num2} is {result}")