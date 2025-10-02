# KR 6th Time and For Loops

import datetime

current = datetime.datetime.now()
hour = current.hour 

#print(f"The time in seconds since Jan 1, 1970: {epoch}")
print(f"The time is: {current}")
print(f"Hour is: {hour}")

#lists
siblings = ["Memphis", "Skyler", "PJ", "Adamathon", "Lizzie", "Casandra", "Pauline", "Sebastian", "Kayzee"]

print(siblings[8])
print(siblings)
siblings [3] = "adam"
siblings [6] = "paul"
siblings.remove("Kayzee")

#for loop
for sibling in siblings: #Temporary variable
    #print(f"Hello {sibling}")
    print("Hi")

for x in range (20,0,-1): #start. stop, what you count by
    print(x)

#While loops
#infinite loop 
#while True:
    #print("Oh NO!!")

#Iterator (How many ran)
#End condiiton (When to stop)
#increase iterator

#good while loop
i = 1

while i < 21:
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i += 1

import random 

number = random.randint(1,20)
x = 1
#while x != number:
    #print("Duck")
    #x += 1 

#print("Goose!")

while True:
    if number == x:
        print("Goose!")
        break #breaks the loop
    else:
        print("Duck")
        x += 1 

#What is a loop? 
    #keep going until a specific condition is met.
#What are the two types of loops?
    #for loop and whule loops
#What is iteration
    #keep track of how many times the loop has run. An iteration is one instance of a loop
#What are lists? 
    #A variable you can put multiple data types in
#How do you make lists in python? 
    #in brackets, make a list, line 13
#How do you make for loops in python? 
    #for each variable, do the action, and then it ends when there's no more variables. The same number of items in the list. 
#How do you make while loops in python?
    #line 41