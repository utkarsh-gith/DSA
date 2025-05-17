import random

def play(matches):
    completed = 0
    user_win = 0
    computer_win = 0
    ties = 0

    while completed != matches:
        user = input("What's your choice? 'r' for rock, 'p' for paper, 's' for scissors\n")
        computer = random.choice(['r', 'p', 's'])

        print(f"You played {user}")
        print(f"Computer played {computer}")

        if user == computer:
            ties += 1
            print("It's a tie this round")
        elif is_win(user, computer):
            user_win += 1
            print("You won this round!")
        else:
            computer_win += 1
            print("You lost this round!")

        completed += 1

    print(f"\nYou won {user_win} round(s)")
    print(f"Computer won {computer_win} round(s)")
    print(f"Tied rounds: {ties}")
    
    if user_win > computer_win:
        print("You won the match!")
    elif user_win < computer_win:
        print("You lost the match!")
    else:
        print("Match was a tie!")

def is_win(player, opponent):
    return (player == 'r' and opponent == 's') or \
           (player == 's' and opponent == 'p') or \
           (player == 'p' and opponent == 'r')

matches = int(input("Enter number of matches to be played: "))
play(matches)