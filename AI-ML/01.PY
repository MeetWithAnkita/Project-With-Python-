def print_single_occurrence(lst):
    frequency = {}
    for item in lst:
        frequency[item] = frequency.get(item, 0) + 1

    print("Elements with a single occurrence:")
    for key, value in frequency.items():
        if value == 1:
            print(key)

user_input = input("Enter numbers separated by spaces: ")
example_list = list(map(int, user_input.split())) 

print_single_occurrence(example_list)
# end of the project 