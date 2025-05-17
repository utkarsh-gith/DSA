import random

def guess(x):
    random_number = random.randint(1, x)
    guess = 0
    while guess != random_number:
        guess = int(input(f"\nGuess the number between 1 and {x}: "))
        if guess < random_number:
            print("Wrong Guess, Your guess is Low")
        elif guess > random_number:
            print("Wrong Guess, Your guess is High")
    print(f"Yay you have guessed the number: {random_number}")

if __name__ == "__main__":
    number = int(input("Enter a random integer: "))
    guess(number)