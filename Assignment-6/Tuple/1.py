# 1. Write a Python program to convert a list into a tuple.
lst = [1, 2, 3, 4, 5]
tpl = tuple(lst)
print(tpl)

# 2.  Write a Python program to create a tuple with multiple data types.
lst2 = [1, "Hello", 3.14, True]
tpl2 = tuple(lst2)
print(tpl2)

# 3. Write a Python program to concatenate two tuples into one.
tpl3 = (6, 7, 8)
tpl4 = (9, 10, 11)
tpl5 = tpl3 + tpl4
print(tpl5)

# 4. Write a Python program to access the value of the first index in a tuple.
tpl6 = (100, 200, 300, 400, 500)
print(tpl6[0])
print(tpl6[1])
print(tpl6[2])
print(tpl6[3])
print(tpl6[4])