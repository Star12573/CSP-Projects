import random
siblings = ["Sierra", "Cosette", "Kael", "Marek"]
count = 0
num = random.randint(1, 11)
for x in range(1, 11):
    if x == num:
        print("Goose!")
        break
    else:
        print("Duck!")