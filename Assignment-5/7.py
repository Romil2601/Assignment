# Practical Example: 1) Write a Python program to print "Hello" using a string.
print("Hello")

# Practical Example: 2) Write a Python program to allocate a string to a variable and print it.
greeting = "Hello"
print(greeting)

# Practical Example: 3) Write a Python program to print a string using triple quotes.
multi_line_string = """This is a string
that spans multiple lines."""
print(multi_line_string)

# Practical Example: 4) Write a Python program to access the first character of a string using index value.
first_character = multi_line_string[0]
print(first_character)

# Practical Example: 5) Write a Python program to access the string from the second position onwards using slicing.
sliced_string = multi_line_string[1:]
print(sliced_string)

# Practical Example: 6) Write a Python program to access a string up to the fifth character.
sliced_string_6 = multi_line_string[:5]
print(sliced_string_6)

# Practical Example: 7) Write a Python program to print the substring between index values 1 and 4.
substring = multi_line_string[1:4]
print(substring)

# Practical Example: 8) Write a Python program to print a string from the last character.
last_character = multi_line_string[-1]
print(last_character)

# Practical Example: 9) Write a Python program to print every alternate character from the string starting from index 1.
alternate_characters = multi_line_string[1::2]
print(alternate_characters)