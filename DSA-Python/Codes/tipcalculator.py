print("Welcome to tip calculator\n")
bill = float(input("Enter the total bill amount. : "))
tip = float(input("What percentage tip do you want to give? : "))
people = float(input("How many people to split the bill? : "))
print(f"each person should pay ${round(bill * (1 + (tip/100)) / people, 2)}")

# Enter the total bill amount. : 1000
# What percentage tip do you want to give? : 10
# How many people to split the bill? : 5
# each person should pay $220.0
