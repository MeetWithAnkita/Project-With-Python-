employees = {} 
def store_employee_data():
    n = int(input("How many employees do you want to add? "))

    for i in range(n):
        name = input(f"Enter the name of employee {i + 1}: ").strip()
        try:
            salary = float(input(f"Enter the salary of {name}: "))
            employees[name] = salary  
        except ValueError:
            print("Invalid salary. Please enter a numeric value.")
            salary = 0  
            employees[name] = salary

    return employees

employee_data = store_employee_data()

print("\nEmployee Data:")
print("Data of dictionary:",employees)