import random

def computer_guess(x):
    low = 1
    high = x
    feedback = ''

    while feedback != 'c':
        if low != high:
            guess = random.randint(low, high)
        else:
            guess = low
        feedback = input(f"Is {guess} correct(C)? Or is it High(H) or Low(L)? ").lower()
        if feedback == 'h':
            high = guess - 1
        elif feedback == 'l':
            low = guess + 1
    
    print(f"Yay! The computer guessed the number {guess} right.")

if __name__ == "__main__":
    number = int(input("Enter the number you want computer to guess: "))
    computer_guess(number * random.randint(2, 5))