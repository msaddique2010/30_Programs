# 14.	Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)
def program14():
    print("14. Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)\n")

    # Input
    mm = float(input("Enter length in millimeters: "))

    # Processing
    inches = mm / 25.4

    # Output
    print(f"Length in inches: {inches:.2f}")
