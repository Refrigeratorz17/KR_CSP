# KR 6th Strings notes

print("I did it!")

#1)-What makes something a string?
    #1.just a collection of symbols that are held together with quotation marks
    #example-"content of string" or 'this is also a string'
    #2.quotation marks on either side have to match
    #3.A bug is any error in your ocde that keeps it from running, or makes it run improperly
 #Examples of strings 
first_name = input("What is your first name?:").strip().title()

last_name = input("What is your last name?:").strip().title()

full_name = first_name + " " + last_name 

sentance = 'The quick brown fox jumps over the lazy dog'

print("Welcome to my program", full_name + "!")
print(sentance.find("brown"))
print(sentance,{10:15}) #slice
#2)-Why do we have strings?
    #2).so we can talk to the user
#How do stupid proofing and sanitization relate to each other?
    #stupid proofing-
    #sanitation-
#What is debugging?
#debugging is fixing problems in my code!
    #Sytax Error- you write something wrong so the computer can't read it
    #EX(string = 'This is my string")
    #Logic Error- code does something we didn't expect it to do. 
numOne = "1"
numTwo = "3"
print(numOne + numTwo) 
    #Run-Time Error-when there is a problem in the code, that will break the code when it tries to run
    #ex(spelling different inputs. no stupid proofing.
letter = "a"
#int(letter)
#How do you debug the different types of errors?
    #you fix a sytax error so that you spell everything correctly.
#Describe what each of the methods below does:
    #find(finds word in code)
    #concatenate (add)
    #upper-makes the whole sentance upper case
    #lower-make the whole sentance lower case
    #strip-It gets rid of spaces at the begining and at the end 
