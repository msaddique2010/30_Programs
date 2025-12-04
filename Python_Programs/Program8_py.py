# 8. Write a program to get temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula. 
# C = 5/9(f – 32) 

def program8():
    print("8. Write a program to get temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula.\n")
    # Input
    Fahrenheit = float(input("Enter temperature in Fahrenheit: "))

    # Processing
    Celsius = (5.0/9.0) * (Fahrenheit - 32.0)

    # Output
    print(f"Temperature in Celsius is: {Celsius}")