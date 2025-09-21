num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))
try:
    result = num1 / num2
    print("The result is:", result)
except ZeroDivisionError:
    print("Oops! You can't divide by zero. Please try again with a non-zero denomination")