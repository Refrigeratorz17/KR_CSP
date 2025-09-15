# KR 6th Function Notes

import random

def welcome():
    name = input("What is your name\n")
    print(f"Hello {name}!")

print(f"The function is over!")

#welcome() function call

def add(number, number_two): #paremeters are entered when we define the function
    number = number + number_two
    print(number)

num_one = 12
num_two = 14
#add(num_one, num_two) #arguments are givin when we call the function
#add(4, 8)
#add(9, 700)
#add(87, 45)

def clean(info):
    return info.strip().lower()

name = input("What is your name?")
quest = input("What is your quest?")
color = input("What is your favorite color?")

print(f"Hello, {clean(name)}. I have heard you are trying to {clean(quest)}, that is super cool!. are you sure {clean(color)} is your favorite color?")

def believe(sentance):
    length = len(sentance)
    spot_one = random.randint(0, length -1)
    spot_two = random.randint(0, length -1)
    spot_three = random.randint(0, length -1)
    full_sentance = sentance.split(" ")
    full_sentance.insert(spot_one, "Believe it!")
    full_sentance.insert(spot_two, "Believe it!")
    full_sentance.insert(spot_three, "Believe it!")
    sentance = " ".join(full_sentance)
    return sentance
    
new_sentence = believe("The quick brown fox jumps over the lazy dog")
print(new_sentence)
print(believe("Peter Piper picked a peck of pickled peppers!"))

#What a function is
    #a set of instructoins that's executed when you call on a key word
    #When you make a function and it indents, it leaves white space, which is used to tell the computer where things are. Meaning it's inside what's above it 
    #It has to be exactly the same as the indentation above it, it will break
    #Your code is read top to bottom, so you cannot ask the computer to preform a function that has not been written yet. 
#Why we use functions
    #It's easier for reapeating something over and over again instead of copy and pasting
#How to write a function in Python
    #look at the top for an example. Def word(): then whatever is indentation is inside.
#What parameters and arguments are
    #Needed when trying to label functions or variables
#How to use parameters and arguments in python
 #look at lines 15-20,
#What return statements are
    #take what happens inside the function and put it back to where you put the function
#How to use return statements in a program
    #look at line 23 and 29 as an example,

#examples of functions
#print("This is a function!")
#input("This is also a function")

#name = input("what is your name\n")
#print(f"Hello {name}")
 #you can copy and paste over and over again, but it's repetative, and hard to read. At the top, is an examples of a function. 
 