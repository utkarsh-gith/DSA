def madlib():
    body_part = input("Body Part: ")
    verb = input("Verb: ")
    adj1 = input("Adjective: ")
    adj2 = input("Adjective: ")
    adj3 = input("Adjective: ")
    adj4 = input("Adjective: ")
    adj5 = input("Adjective: ")
    noun1 = input("Noun: ")
    noun2 = input("Noun: ")
    noun_plural_1 = input("Noun (plural): ")
    noun_plural_2 = input("Noun (plural): ")

    madlib = f"I absolutely love computer programming because it's so {adj1}! The adventure to becoming a \
skilled programmer begins with a spark of curiosity in your {body_part}. Along the way, you'll push through \
late nights, countless errors, and a mountain of {noun_plural_1}. But once you learn to {verb}, everything changes—\
it becomes second nature, woven into who you are. Suddenly, you're a {adj2} problem-solver, a builder of dreams in code. \
With programming, you gain the power to shape your own {noun1}, whether it's crafting {noun_plural_2}, building \
{adj3} applications, or uncovering patterns hidden in the {noun2}. Maybe you'll even build your own Jarvis—\
but cooler, smarter, and incredibly {adj4}. So go ahead, begin your {adj5} journey today. Code your future, \
one line at a time—with Kylie by your side. :)"

    print(madlib)

madlib()