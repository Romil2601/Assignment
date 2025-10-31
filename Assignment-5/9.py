# Write a Python program to demonstrate string slicing.
multi_line_string = """This is a string
that spans multiple lines."""
print(multi_line_string[0:4])  # Output: This
print(multi_line_string[5:7])  # Output: is
print(multi_line_string[8:])  # Output: a string

# Write a Python program that manipulates and prints strings using various string methods.
print(multi_line_string.upper())  # Output: THIS IS A STRING
print(multi_line_string.lower())  # Output: this is a string
print(multi_line_string.title())  # Output: This Is A String