import datetime

time = datetime.datetime.now().hour
print(time-6)
if time <= 12:
    print("Good Morning!")
elif time > 12:
    print("Good Afternoon!")
elif time >= 18:
    print("Good Evening!")
else:
    print("Good Night!")