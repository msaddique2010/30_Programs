# 18.	Write a program to assign values to variables 'vi' and 't' a compute the value of 's' by using the formula: 
#  	 	 	𝑺 = 𝒗𝒊 ∗ 𝒕 + ½ 𝒂𝒕𝟐 
def program18():
    print("18. Write a program to assign values to variables 'vi' and 't' a compute the value of 's'\n")
    # Processing
    vi = 5
    a = 2
    t = 3

    S = (vi * t) + ((1.0 / 2.0) * a * (t * t))

    # Output
    print(f"S = {S:.0f}")
