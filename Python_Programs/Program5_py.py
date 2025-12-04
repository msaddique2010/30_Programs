# 5.	Write a program to get two numbers. Calculate the sum and product of the numbers and then print the result on the screen.
def program5():
    print("5. Write a program to get two numbers. Calculate the sum and product of the numbers and then print the result on the screen.\n")

    # Input
    num1 = int(input("Enter 1st Number: "))
    num2 = int(input("Enter 2nd Number: "))

    # Processing
    sum = num1 + num2
    product = num1 * num2

    # Output
    print(f"Sum is: {sum}")
    print(f"Product is: {product}")
