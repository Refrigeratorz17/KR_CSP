# KR 6th Financial calculaor

#amounts for each catagory, save 10% a month 
#income:3000 10% 3000*.1=savings=300 
# rent:1200=1200/3000 48% utilities:250 Groceries:200 transportation:500 
#total expenses:2150 spending money=550
#percent_rent= rent/income*100
#total expenses- every money added 
#spending = income-savings-total expenses 
#float.2
income = input("Hello! What is your monthly income?:")
rent = input("What is your monthly rent/mortgage?:")
utilities = input("what is your monthy utilities?:")
groceries = input("What is your monthly groceries?:")
transport = input("What is your monthly transportation cost?:")
r_p = rent / income * 100
print("your rent is", rent, "and that is",r_p,"percent of your income")