# 27.	Write a program to input time in hours, minutes and seconds. Convert time into seconds and print the result on screen. 
def program27():
    print("27.	Write a program to input time in hours, minutes and seconds. Convert time into seconds and print the result on screen.\n")
    # Input
    Hours = int(input("Enter Hours: "))
    Minutes = int(input("Enter Minutes: "))
    Seconds = int(input("Enter Seconds: "))

    # Processing
    time_in_seconds = (Hours * 60 * 60) + (Minutes * 60) + Seconds

    # Output
    print("Time in seconds =", time_in_seconds)
