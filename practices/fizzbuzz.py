# KR 6th FizzBuzz

number = 1 

while number < 51:
    if number % 3 == 0 and number % 5 == 0:
        print(f"fizz buzz")
    elif number % 5 == 0:
        print(f"buzz")
    elif number % 3 == 0:
        print(f"fizz")
    else:
        print(number)
    number += 1