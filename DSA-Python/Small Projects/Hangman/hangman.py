from words import words
import random
import string

def get_valid_word(words):
    word = random.choice(words)
    while '-' in word or ' ' in word:
        word = random.choice(words)
    return word

def hangman():
    word = get_valid_word(words).upper() # getting a valid word
    word_letters = set(word) # set of letters in the word
    alphabets = set(string.ascii_uppercase) # alphabet set
    used_letters = set() # set to store user guessed letters

    chances = 7

    #user input
    while len(word_letters) > 0 and chances > 0:
        print("\nYou have used these letters ", ' '.join(used_letters))
        print(f"Chances left: {chances}")

        #how much of the guessed word
        word_list = [letter if letter in used_letters else '_' for letter in word ]
        print("Current word: ", ' '.join(word_list))

        user_letter = input("Enter the guess: ").upper()
        if user_letter in alphabets - used_letters:
            used_letters.add(user_letter)
            if user_letter in word_letters:
                word_letters.remove(user_letter)
                print(f"you guessed {user_letter} right")
            else:
                print("Letter doesnot belong to the word")
                chances -= 1
        elif user_letter in used_letters:
            print("You have used that character")
        else:
            print("Invalid character. Try Again")
    
    print(f"\nYou have guessed the word {word}" if chances > 0 else f"\nYou have killed the man. The word was {word}")

hangman()