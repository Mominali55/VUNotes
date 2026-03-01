# Question 1

def regular_exp():
    x= int(input("Enter first  number"))
    y= int(input("Enter second number"))
    result=(2*(x**2)*y) + (3*(x**3)*(y**2)) +6
    print(result)

# Question 2 

def string_manipulation():
    Record={
    "Momin":7487,
    "mike":8498,
    "tommy":7749,
    "Coco":7387,
    "chicu":939493,
    "Larry":87827,
    "Projecter":728782,
    "IPS_officer":492892,
    "Banana":982498,
    "mikey":2979293
}

    username=input("Enter a username:")
    if username in Record:
        print("""
            ---Username found---
            Your Password is:
            """,Record[0])

    else:
        print("Not found")

def main():
    #regular_exp()
    string_manipulation()

main()