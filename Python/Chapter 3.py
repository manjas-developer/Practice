#Problem 1
name = input("Enter your name: ")
print(f"Good Afternoon, {name}!")

#Problem 2
name = "Manjas Anand"
date = "6th September 2026"
letter = '''
Dear <|name|>,
You are selected!
Date: <|date|>
'''
print(letter.replace("<|name|>", name).replace("<|date|>", date))

#Problem 3
text = "Manjas is a  good boy."
print(text.find("  "))

#Problem 4
print(text.replace("  ", " "))

#Problem 5
Letter = "Dear Manjas, This Python course is nice. Thanks!"
Format = "Dear Manjas,\n\tThis Python course is nice.\nThanks!"
print("")
print(Format)