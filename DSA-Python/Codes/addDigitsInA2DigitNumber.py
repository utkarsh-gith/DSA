two_digit_number = input("Enter a two digit number: ")
i = 0
for character in two_digit_number:
    i = i + 1
if i == 2:
    first_digit = two_digit_number[0]
    second_digit = two_digit_number[1]
    print(int(first_digit) + int(second_digit))
else:
    print("Invalid Input")

# Enter a two digit number: 55
# 10
