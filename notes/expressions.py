# KR 6th Expressions Notes

#What is an algorithm? 
    #set of instructions to accomplish a task
    #Expression is a collection of numbers and symbols in order to get a result
    #Going through the exact same steps
    #an integer is a data type that can only hold whole numbers
    #float (floating point number) holds decimals 
name = input("What is your name? ")
print("hello", name)

#algorithm for area
length = 5
width = 20 
area = length * width
print(length, "X", width, "=", area) 
#List steps in an algorithm
    # 1. variables/pieces of info needed
    # 2. process our info
    # 3.provide an output

#finding an average age from a group of 4
#1
age1 = 20
age2 = 12
age3 = 5
age4 = 50
#2
average = (age1+age2+age3+age4)/4
#3
print("the average of these ages", age1,"-",age2,"-",age3,"-",age4,"-","is", average)
#List all of the different mathematical operators/assignment operators
num_one = float(input("give me a number:\n"))
num_two = int(input("give me a number:\n"))

num_one += num_two
print("addition(+):", round(num_one, 0)) #1. What needs to be rounded 2. how many decimals
num_one -= num_two
print("subtraction(-):", num_one)
num_one *= num_two
print("multiplication(*):", num_one)
num_one /= num_two
print("division(/):", round(11/3, 2))
num_one **= num_two
print("exponents(**):", num_one)
num_one //= num_two
print("integer divison(//):", )
num_one %= num_two
print("modulo (remainder)(%):", num_one % num_two)
print("(3*5**2/15)-(5-2**2)=",(3*5**2/15)-(5-2**2))
#Why is this important in programming?
    #because if i set it up once, I never have to do it ever again. it makes it easier for us