# 9. Write a program to find the maximum number from four numbers. 
def program9():
    print("9. Write a program to find the maximum number from four numbers.\n")
    
    # Processing
    num1, num2, num3, num4 = 5, 67, 24, 38

    max_num = num1
    if num2 > max_num:
        max_num = num2
    if num3 > max_num:
        max_num = num3
    if num4 > max_num:
        max_num = num4

    # Output
    print("Maximum number is:", max_num)
