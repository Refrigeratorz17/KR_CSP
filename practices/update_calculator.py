# KR 6th Updated financial calculator 

def expense(ask_question):
    answer = round(int(input(ask_question)),2)
    return answer


income = expense("What is your monthly income?:")
rent = expense("What is your monthly rent/mortgage?:")
utilities = expense("What is your monthly utilities?:")
groceries = expense("What is you rmonthly groceries?:")
transport = expense("What is your monthly transport?:")
savings = int(income*.1)

def percent(value, income):
    answer = round(int(value/income*100),2)
    return answer

rent_perc = percent(rent, income)
util_perc = percent(utilities, income)
groc_perc = percent(groceries, income)
tran_perc = percent(transport, income)
save_perc = percent(savings, income)

print(f"your rent is {rent}, and that is {rent_perc}% of your income")
print(f"your utilities is {utilities}, and that is {util_perc}% of your income")
print(f"your groceries is {groceries}, and that is {groc_perc}% of your income")
print(f"your tansport is {transport}, and that is {tran_perc}% of your income")
print(f"you should save {savings} a month, and that is {save_perc}% of your income")

total = rent+utilities+groceries+transport+savings
s_m = round(float(income-total), 2)

print("you have", s_m, "dollars of spending money each month")