# Write a Python program to iterate over a list using a for loop.
mixed_list = [1, "apple", 3.14, True]
for item in mixed_list:
    print(item)

# Write a Python program to sort a list using both sort() and sorted().
mixed_list.sort()
print(mixed_list) 
sorted_list = sorted(mixed_list)
print(sorted_list)

# Write a Python program to iterate through a list and print each element.
for item in mixed_list:
    print(item)
    
# Write a Python program to insert elements into an empty list using a for loop and append().
empty_list = []
for i in range(5):
    empty_list.append(i)
print(empty_list)