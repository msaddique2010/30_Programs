# 22.	Write a program to input the name, age, height and gender of the student and prints the data of student on screen. 
def program22():
    print("22.	Write a program to input the name, age, height and gender of the student and prints the data of student on screen.\n");
    
    # Input
    name = input("Enter Name: ")
    age = input("Enter Age: ")
    height = input("Enter Height (in feet): ")
    gender = input("Enter Gender: ")

    # Processing
    details = "Name: " + name + "\nAge: " + age + " years\nGender: " + gender + "\nHeight: " + height + " feet."

    # Output
    print("Your details are give below.")
    print(details)
