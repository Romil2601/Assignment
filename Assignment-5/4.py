# 1. Practical Example 5: Write a Python program to find greater and less than a number using if_else.
num = int(input("Enter a number: "))
if num > 0:
    print(f"{num} is a positive number.")
else:
    print(f"{num} is a negative number.")


# 2. Practical Example 6: Write a Python program to check if a number is prime using if_else.
num = int(input("Enter a number: "))
if num > 1:
    for i in range(2, num):
        if num % i == 0:
            print(f"{num} is not a prime number.")
            break
    else:
        print(f"{num} is a prime number.")
else:
    print(f"{num} is not a prime number.")


# 3. Practical Example 7: Write a Python program to calculate grades based on percentage using if-else ladder.
percentage = float(input("Enter your percentage: "))
if percentage >= 90:
    print("Grade: A")
elif percentage >= 80:
    print("Grade: B")
elif percentage >= 70:
    print("Grade: C")
elif percentage >= 60:
    print("Grade: D")
else:
    print("Grade: F")



# 4. Practical Example 8: Write a Python program to check if a person is eligible to donate blood using a nested if.
age = int(input("Enter your age: "))
weight = float(input("Enter your weight in kg: "))
if age >= 18:
    if weight >= 50:
        print("You are eligible to donate blood.")
    else:
        print("You must weigh at least 50 kg to donate blood.")
else:
    print("You must be at least 18 years old to donate blood.")