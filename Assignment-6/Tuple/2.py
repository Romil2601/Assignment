# 1. Write a Python program to access values between index 1 and 5 in a tuple.
tpl = (10, 20, 30, 40, 50, 60, 70, 80, 90)
sliced_tpl = tpl[1:6]
print(sliced_tpl)

# 2. Write a Python program to access alternate values between index 1 and 5 in a tuple.
alternate_tpl = tpl[1:6:2]
print(alternate_tpl)

# 3. Write a Python program to access the value from the last index in a tuple.
last_value = tpl[-1]
print(last_value)