# KR 6th Conditionals Notes

#A conditional is a what do you want decision. give computer information, and based on the decision it will give different outputs
#What puts something inside of the “if” statement?
    #it's tabbed over
    #it gives the computer a true or false statement
#What do if statements do?
    #They give an output, based on a made decision 
#What are boolean statements? 
    #it tells the computer what's true and what's false
#What do else statements do?
    #they give an output if the previous statement is false
#What kind of statement do you use if you have more than 2 needed outcomes?
#elif-else if statement
#What do each of the different symbols mean in conditionals?
    #comparison opperators
    #<:less than 
    #>:greater than
    #<=-less than or equal to
    #>=:greater than or equal to
    #==:equal to
    #!:not equal to
#What are the 3 logical operators?
    #AND-OR-NOT
#What are logical operators for?
    #lets us put multiple conidtions together, check two or more conditions at the same time
#What does a nested conditional statement do?
    #a condition inside of a conditional.

num = int(input("Tell me a whole number: "))

if num < 10:
    print(f"{num} is a single digit number")
elif num < 100:
    print(f"{num} is a two digit number")
elif num == 4:
    print("That is the winning number!")
else:
    print(f"{num} is a big number")

name = input("Please tell me your name: ")

if name == "Ms LaRose":
    print("You are the teacher!")
    if num == 4:
        print("That is my favoirtie number")
elif name == "Tia" or name == "Andrew":
    print("you are the TA!")
else:
    if name == "Lucas":
        print("You are in 7th period")
    print(f"Hello {name}, you are a student!")

if num >=0 and num < 10: #and means both must be true
    print(f"{num} is a single digit number")
elif num <25 or num == 50: #or means only 1 must be true
    print(f"Wow {num} is a really cool number")
elif not num < 100: #not checks is the opposit is true
    print(f"{num} is a large number")
else:
    print(f"you typed in a {num}")