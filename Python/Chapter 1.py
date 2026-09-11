#Problem 1
print('''Twinkle, twinkle, little star,
How I wonder what you are!
Up above the world so high,
Like a diamond in the sky.''')

#Problem 3
import pyttsx3
engine = pyttsx3.init()
engine.say("The master blaster developer, the god, the thunder, the legend, the one and only, Manjas Anand")
engine.runAndWait()

#Problem 4
import os
directory_path = '/Python'
contents = os.listdir(directory_path)
for item in contents:
    print(item)