def help_menu():
    print("\nHelp - Operation Guide:")
    print("1: Addition (+) - Adds two numbers and gives the sum.")
    print("2: Subtraction (-) - Subtracts the second number from the first.")
    print("3: Multiplication (*) - Multiplies two numbers.")
    print("4: Division (/) - Divides the first number by the second (ensure the second number isn't zero).")
    print("5: Modulus (%) - Finds the remainder when the first number is divided by the second (for integers).")
    print("Select any operation to perform or 0 to view this help again.\n")


def calculator():
    print("Welcome To Calculator in Python\n")

    while True:
        print("Select Your Desired Operation By Typing - ")
        print("0 for Help")
        print("1 for Addition (+)")
        print("2 for Subtraction (-)")
        print("3 for Multiplication (*)")
        print("4 for Division (/)")
        print("5 for Modulus (%)")

        operation = input()

        if operation == '0':
            help_menu()
            continue

        if operation not in ['1', '2', '3', '4', '5']:
            print("Invalid input. Please enter a valid number from 1 to 5.")
            continue

        operation_name = ""
        if operation == '1':
            operation_name = "Addition"
        elif operation == '2':
            operation_name = "Subtraction"
        elif operation == '3':
            operation_name = "Multiplication"
        elif operation == '4':
            operation_name = "Division"
        elif operation == '5':
            operation_name = "Modulus"

        print(f"You Selected {operation_name}")
        num1 = float(input("Now, Enter the first number and click enter: "))
        num2 = float(input("Great, Now enter the second number and click enter: "))

        if operation == '1':
            result = num1 + num2
            print(f"Result of {num1} + {num2} is = {result}")
        elif operation == '2':
            result = num1 - num2
            print(f"Result of {num1} - {num2} is = {result}")
        elif operation == '3':
            result = num1 * num2
            print(f"Result of {num1} * {num2} is = {result}")
        elif operation == '4':
            if num2 != 0:
                result = num1 / num2
                print(f"Result of {num1} / {num2} is = {result}")
            else:
                print("Error: Division by zero!")
        elif operation == '5':
            if num2 != 0:
                result = int(num1) % int(num2)
                print(f"Result of {int(num1)} % {int(num2)} is = {result}")
            else:
                print("Error: Modulus operation is not possible. Divisor (second number) cannot be zero.")

        break


if __name__ == "__main__":
    calculator()
