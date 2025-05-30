import math

def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    return x / y

def square_root(x):
    return math.sqrt(x)

def power(x, y):
    return math.pow(x, y)

def scientific_calculator():
    print("Scientific Calculator")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Square Root")
    print("6. Power")
    print("7. Exit")

    while True:
        choice = input("Enter your choice (1-7): ")

        if choice == '7':
            print("Exiting the calculator...")
            break

        num1 = float(input("Enter the first number: "))

        if choice == '5':
            result = square_root(num1)
            print("The square root of", num1, "is", result)
            continue

        if choice != '6':
            num2 = float(input("Enter the second number: "))

        if choice == '1':
            result = add(num1, num2)
            print(num1, "+", num2, "=", result)
        elif choice == '2':
            result = subtract(num1, num2)
            print(num1, "-", num2, "=", result)
        elif choice == '3':
            result = multiply(num1, num2)
            print(num1, "*", num2, "=", result)
        elif choice == '4':
            result = divide(num1, num2)
            print(num1, "/", num2, "=", result)
        elif choice == '6':
            result = power(num1, num2)
            print(num1, "^", num2, "=", result)
        else:
            print("Invalid input. Please enter a valid choice.")

        print()  # Add a blank line for better readability

scientific_calculator()
