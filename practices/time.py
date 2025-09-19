# KR 6th Time of Day

time = int(input("What is the hour in military time?"))

if time <= 24 and time >= 18:
    print("Good Evening!")
elif time >= 12 and time <= 17:
    print("Good Afternoon!")
elif time >= 0 and time <= 11:
    print("Good Morning!")
else:
    print("That is not a time in military time")