# Practical 5

# Question 1

import re

""" 

def chk_alphabets():

    user_input=input("Enter a string[a-z,A-Z,0-9,_]")

    #Counters
    lowercase = uppercase = digit = underscore = 0

    for letter in user_input:
        if letter.islower():
            lowercase+=1
        elif letter.isupper():
            uppercase+=1
        elif letter.isdigit():
            digit+=1
        else:
            underscore+=1

    print(f"Total lowercase : {lowercase}  \
            Total uppercase : {uppercase} \
            Total digits : {digit}\
            Total underscore : {underscore} ")

# Question 2
  
def vowels():
    user_input=input("Enter a string")
    count_vowels=0

    for letter in user_input:
        if letter in ["a","e","i","o","u"]:
            count_vowels+=1
        
    print("The Total number of vowels:",count_vowels)

def main():
    # chk_alphabets()
    vowels()

main()

"""

def chk_alphabets_regex(txt: str) -> None:

    upper = len(re.findall(r"[A-Z]", txt))
    lower = len(re.findall(r"[a-z]", txt))
    digit = len(re.findall(r"[0-9]", txt)) 
    space = len(re.findall(r"\s", txt))    

    print(f"Uppercase: {upper}")
    print(f"Lowercase: {lower}")
    print(f"Digits:{digit}")
    print(f"Spaces:{space}")

def chk_vowels_regex(txt: str) -> None:
    vowels = len(re.findall(r"[aeiou]",txt.lower()))
    print(f"Total number of vowels:{vowels}")
    
def main():
    user_input = input("Enter a string: ")
    chk_alphabets_regex(user_input)
    chk_vowels_regex(user_input)


main()


