import datetime

now = datetime.datetime.now()
if "hour <= 12":
    print("Good Morning!")
if "hour >12":
    print("Good Afternoon!")
if "hour >=18":
    print("Good Evening!")
else:
    print("Good Night!")
print(now)


