import random
from computer_guess import computer_guess
from guess_number import guess

choice = input("Do you want to guess (I) or make the computer (C) guess? ").lower()

if choice == 'i':
    number = int(input("Enter a random integer: "))
    guess(number)
elif choice == 'c':
    number = int(input("Enter the number you want computer to guess: "))
    computer_guess(number * random.randint(2, 5))
else:
    print("Invalid choice. Please enter 'I' or 'C'.")