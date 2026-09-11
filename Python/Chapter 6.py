# Problem 1
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
c = int(input("Enter third number: "))
d = int(input("Enter fourth number: "))
print("\n")
if a > b and a > c and a > d:
    print(f"The largest number is {a}.")
elif b > c and b > d:
    print(f"The largest number is {b}.")
elif c > d:
    print(f"The largest number is {c}.")
else:
    print(f"The largest number is {d}.")

# Problem 2
math = int(input("Enter marks for math: "))
science = int(input("Enter marks for science: "))
computer = int(input("Enter marks for computer: "))
total = math + science + computer
percentage = (total / 300) * 100
print("\n")
if percentage >= 40 and math >= 33 and science >= 33 and computer >= 33:
    print("Pass")
else:
    print("Fail")

# Problem 3
spam_comment = "Make a lot of money fast!"
if "make a lot of money" in spam_comment.lower():
    print("This comment is spam!")
else:
    print("This comment is not spam!")

# Problem 4
username = input("Enter your username: ")
if len(username) < 10:
    print("Username contains less than 10 characters.")
else:
    print("Username contains 10 or more characters.")

# Problem 5
name_list = ["Manjas", "Tejas", "Mayank", "Tillu", "Bittu", "Him Jyoti"]
name = input("Enter your name: ")
if name.lower() in [n.lower() for n in name_list]:
    print("Your name is present in the list.")
else:
    print("Your name is not present in the list.")

# Problem 6
marks = int(input("Enter your marks: "))
if marks >= 90:
    print("Grade Ex")
elif marks >= 80 and marks < 90:
    print("Grade A")
elif marks >= 70 and marks < 80:
    print("Grade B")
elif marks >= 60 and marks < 70:
    print("Grade C")
elif marks >= 50 and marks < 60:
    print("Grade D")
elif marks < 50:
    print("Grade F")

# Problem 7
post = input("Enter your post: ")
if "harry" in post.lower():
    print("Harry is present in your post.")
else:
    print("Harry is not present in your post.")