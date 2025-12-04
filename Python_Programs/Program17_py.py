# 17.	 Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen. 
def program17():
    print("17. Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen.\n")

    # Processing
    val = 15.58971

    integral = int(val)
    fractional = val - integral

    # Output
    print("Integral part:", integral)
    print(f"Fractional part: {fractional:.5f}")
