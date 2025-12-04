# 25. Write a program to input the values of three sides of a triangle and calculate its area using the formula:  
# 	 	Area = √𝒔(𝒔 − 𝒂)(𝒔 − 𝒃)(𝒔 − 𝒄)   	 	where s = (a + b + c)/2 
import math
def program25():
    print("25. Write a program to input the values of three sides of a triangle and calculate its area\n")
    # Input
    a = float(input("Enter side a: "))
    b = float(input("Enter side b: "))
    c = float(input("Enter side c: "))

    # Processing
    s = (a + b + c) / 2
    Area = math.sqrt(s * (s - a) * (s - b) * (s - c))

    # Output
    print("Area =", round(Area, 2))
