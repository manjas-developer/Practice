#Problem 1
dict = {
    "विदेशी": "foreign",
    "हिन्दी": "Hindi",
    "कुत्ता": "dog"
}
input = input("Enter a Hindi word: ")
print(dict.get(input))

#Problem 2
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))
num4 = int(input("Enter fourth number: "))
num5 = int(input("Enter fifth number: "))
num6 = int(input("Enter sixth number: "))
num7 = int(input("Enter seventh number: "))
num8 = int(input("Enter eighth number: "))
numbers = {num1, num2, num3, num4, num5, num6, num7, num8}
print("The unique numbers are: ", numbers)

#Problem 3
set = {18, "18"}
print(set)

#Problem 4
s = set()
s.add(20)
s.add(20.0)
s.add("20")
print(s)
print(len(s))

#Problem 5
a = {}
print(type(a))

#Problem 6
d = {}
name1 = input("Enter friends name: ")
lang1 = input("Enter your favourite programming language: ")
d.update({name1: lang1})
name2 = input("Enter friends name: ")
lang2 = input("Enter your favourite programming language: ")
d.update({name2: lang2})
name3 = input("Enter friends name: ")
lang3 = input("Enter your favourite programming language: ")
d.update({name3: lang3})
name4 = input("Enter friends name: ")
lang4 = input("Enter your favourite programming language: ")
d.update({name4: lang4})
print(d)
