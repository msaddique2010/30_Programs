# 28.	Write a program to input values into variables a, b and c. Compute the value of 'disc' by using formula: disc = b2 - 4ac 
def program28():
    print("28.	Write a program to input values into variables a, b and c. Compute the value of 'disc' by using formula: disc = b2 - 4ac ")
    # Input
    a = float(input("Enter value of a: "))
    b = float(input("Enter value of b: "))
    c = float(input("Enter value of c: "))

    # Processing
    Disc = (b * b) - 4 * (a * c)

    # Output
    print("Disc =", Disc)
