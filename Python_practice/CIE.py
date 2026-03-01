import datetime
import time

def fib():
    user=int(input("Enter:"))

    #fib nocci fixed value
    a=0
    b=1

    # we loop over the entered value
    for i in range(user):

        #main section
        """
        As a ha sinitail value "0" we print that first after that we sum
        sum a "0" with b "1" an dthat gets sored in result we now have the next value
        """

        print (a, end= " ")
        result = a + b
        a=b
        b=result

        #a, b = b, a + b

def pali2():
    # input() is already a string, so str() is optional but fine
    num = input("enter number: ")
    
    # --- Palindrome Logic (This was Perfect!) ---
    if num == num[::-1]:
        print("Palindrome")
    else:
        print("not Palindrome")
    
    # --- Armstrong Logic (Fixed) ---
    
    # 1. Create a variable to hold the sum BEFORE the loop
    result1 = 0 
    
    # 2. Calculate the power (length of the number)
    # If you only want to check 3-digit numbers, you can keep this as 3.
    power = len(num) 

    # 3. Start the loop
    for i in num:
        cvt = int(i)           # Convert digit string to integer
        result_new = cvt ** power  # Calculate power
        result1 += result_new  # ADD it to the total (must be INSIDE loop)
    
    # 4. Check the final result
    cvt1 = int(num)
    if result1 == cvt1:
        print("is armstrong")
    else:
        print("is not armstrong")

# Call the function to run it

def date():
    time1=1700000000

    read= datetime.datetime.fromtimestamp(time)

    print(read)

    sec = time1.time()
    mili=int(sec*1000)

    print(mili)
    
def student():
    user=float(input("enter yur "))
    if user >= 75:
        print("Distinction")
    else:
        if user >= 60:
            print("first")
        else:
            if user >= 50:
                print("sEcond")
            else:
                if user >= 40:
                    print("pass")
                else:
                    print("Fail")

def eli():
    age=int(input("enter yr age"))
    test =input("Enter test result(pass fail)")
    if age >18:
        if test == "pass":
            print("eli")
        else:
            print("not eli")
    else:
        print("not eli")

def number():
    
    for i in range(10):
        print(i+1)

def sum_num():
    i=1
    total=0
    while i <=10:
        print("Enter number")
        num=int(input("enter"))
        total+=num
        i+=1
    print(total)


def character():
    str="hello world 123"

    #Total counter
    digit=0
    char=0
    vowels=0
    for i in str:
        if i.isdigit():
            digit+=1
        elif i.isalpha():
            char += 1
            # 3. Check if that letter is a vowel
            if i.lower() in ["a", "e", "i", "o", "u"]:
                vowels += 1
        else:
            pass #For ignoring "spacesss","symbolss"etc
    
    print(f"Total number of digit:{digit},character:{char},vowels:{vowels}")



def main():
    character()


main()


