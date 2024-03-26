fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']

# Count occurrences of 'apple'
apple_count = fruits.count('apple')
print(f"Count of 'apple': {apple_count}")

# Count occurrences of 'tangerine'
tangerine_count = fruits.count('tangerine')
print(f"Count of 'tangerine': {tangerine_count}")

# Find the index of 'banana'
banana_index = fruits.index('banana')
print(f"Index of 'banana': {banana_index}")

# Find the index of 'banana' starting at position 4
banana_index_2 = fruits.index('banana', 4)
print(f"Index of 'banana' starting at position 4: {banana_index_2}")

# Reverse the list
fruits.reverse()
print(f"Reversed fruits list: {fruits}")

# Append 'grape' to the list
fruits.append('grape')
print(f"Fruits list after appending 'grape': {fruits}")

# Sort the list in alphabetical order
fruits.sort()
print(f"Fruits list after sorting: {fruits}")

# Pop the last element from the list
popped_element = fruits.pop()
print(f"Popped element: {popped_element}")
print(f"Fruits list after popping: {fruits}")
