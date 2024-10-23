def budget(type):
    return input(f"What is your monthly {type}?:\n")

print("Hello and welcome to your financial calculator!")
income = float (budget("income"))
rent = float (budget("rent"))
utilities = float (budget("utilities"))
groceries = float (budget("groceries"))
transportation = float (budget("transportation"))
expenses = rent + transportation + groceries + utilities
savings = income*2
spending = income - expenses - savings
def percent(type, amount):
    per = amount/income*100

    return f"Your {type} is {per}% income."

print(f"Your monthly income is ${income}\n")
print(f"Your monthly expenses are ${expenses}\n")
print(f"Your monthly savings is ${savings}\n")
print(f"Your monthly spending money is ${spending}\n")
print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transportation", transportation))
print(percent("savings", savings))
print(percent("expenses", expenses))