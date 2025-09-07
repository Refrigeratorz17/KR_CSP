# KR 6th Financial calculator

income = round(float(input("What is your monthly income?:")), 2)
rent = round(float(input("What is your monthly rent/mortgage?:")),2)
utilities = round(float(input("What is your monthly utilities?:")), 2)
groceries = round(float(input("What is you rmonthly groceries?:")), 2)
transport = round(float(input("What is your monthly transport?:")), 2)
savings = int(income*0.1)

rent_perc = int(rent/income*100)
util_perc = int(utilities/income*100)
groc_perc = int(groceries/income*100)
tran_perc = int(transport/income*100)
save_perc = int(savings/income*100)

print("your rent is", rent, "and that is", rent_perc, "percent of your income")
print("your utilities is", utilities, "and that is", util_perc, "percent of your income")
print("your groceries is", groceries, "and that is", groc_perc, "percent of your income")
print("your tansport is", transport, "and that is", tran_perc, "percent of your income")
print("you should save", savings, "a month, and that is", save_perc, "percent of your income")

total = rent+utilities+groceries+transport+savings
s_m = round(float(income-total), 2)

print("you have", s_m, "dollars of spending money each month")