# Practical 5

# Question 1

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

