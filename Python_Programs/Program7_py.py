# 7.	Write a program to get the Roll No. of a student and marks obtained in three subject Programming Fundamentals, Introduction to Computing and Computer Graphics. Calculate the Total and Average. Each subject has a maximum of 100 marks.
def program7():
    print("7.	Write a program to get the Roll No. of a student and marks obtained in three subject Programming Fundamentals, Introduction to Computing and Computer Graphics. Calculate the Total and Average. Each subject has a maximum of 100 marks.\n")
    # Input
    rollnumber = int(input("Enter roll no.: "))
    PF = int(input("Enter PF marks: "))
    IC = int(input("Enter IC marks: "))
    CG = int(input("Enter CG marks: "))
    # Processing
    total = PF + IC + CG
    average = total / 3.0

    # Output
    print(f"Total is: {total}")
    print(f"Average is: {average}")
