# 1. Write a Python program to update a value in a dictionary.
my_dict = {
    'name': 'Alice',
    'age': 30,
    'city': 'New York',
    'job': 'Engineer',
    'hobby': 'Painting',
    'is_student': False
}
my_dict['age'] = 31
print(my_dict)

# 2. Write a Python program to merge two lists into one dictionary using a loop.
keys = ['name', 'age', 'city']
values = ['Alice', 31, 'Los Angeles']
merged_dict = {}
for i in range(len(keys)):
    merged_dict[keys[i]] = values[i]
print(merged_dict)

# 3. Write a Python program to separate keys and values from a dictionary using keys() and values() methods.
keys = list(merged_dict.keys())
values = list(merged_dict.values())
print("Keys:", keys)
print("Values:", values)

# 4. Write a Python program to count how many times each character appears in a string.
input_string = "hello world"
char_count = {}
for char in input_string:
    if char != " ":
        char_count[char] = char_count.get(char, 0) + 1
print(char_count)