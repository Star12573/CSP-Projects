income = int (input("Hello and welcome to your financial calculator! What is your monthly income?: \n"))
rent = int (input("What is your monthly rent?: \n"))
utilities = int (input("What is your monthly utilities?: \n"))
groceries = int (input("What is your monthly groceries?: \n"))
transportation = int (input("What is your monthly transportation costs?: \n"))
expenses = rent+transportation+groceries+utilities
savings = income*2
spending = income-expenses-savings
prent = rent/income*100
putilities = utilities/income*100
pgroceries = groceries/income*100
ptransportation = transportation/income*100
pexpenses = expenses/income*100
psavings = savings/income*100
print(f"Your monthly income is ${income}\n")
print(f"Your monthly expenses are ${expenses}\n")
print(f"Your monthly savings is ${savings}\n")
print(f"Your monthly spending money is ${spending}\n")
print(f"Your rent is {int(prent)}% of your monthly income\n")
print(f"Your utilities are {int(putilities)}% of your monthly income \n")
print(f"Your groceries are {int(pgroceries)}% of your monthly income \n")
print(f"Your transportation is {int(ptransportation)}% of your monthly income \n")
print(f"Your savings are {int(psavings)}% of your monthly income \n")
print(f"Your expenses are {int(pexpenses)}% of your monthly income \n")