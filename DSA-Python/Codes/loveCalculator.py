print("Love score calculator")
name1 = input("Enter first name: ")
name2 = input("Enter second name: ")

name = name1 + name2
name = name.lower()

score1 = str(name.count("t") + name.count("r") + name.count("u") + name.count("e"))
score2 = str(name.count("l") + name.count("o") + name.count("v") + name.count("e"))

score = int(score1 + score2)

if score > 90 or score < 10:
    print(f"Your score is {score}, you go together like coke and mentos.")
elif score > 40 and score < 50:
    print(f"Your score is {score}, you are alright together.")
else:
    print(f"Your score is {score}.")
