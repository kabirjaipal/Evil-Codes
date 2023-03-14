import sys

# Create a sample dictionary
my_dict = {"key1": "value1", "key2": "value2", "key3": "value3"}

# Get the size of the dictionary in bytes
dict_size = sys.getsizeof(my_dict)

# Print the size of the dictionary
print("The size of the dictionary is", dict_size, "bytes")
