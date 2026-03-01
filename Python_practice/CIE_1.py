from string import Template

def for_lopp():
    for i in range(10):
        print(i+1)

def while_loop():
    a=(1,2,3,4,5,6,7,8,9,10)
    result=0
    index=0
    while index < len(a):
        result+=a[index]
        index+=1
    print(result)

def format_method():
    value=[["yo","yello"],"hello"]
    print("hello there {}".format(value[0][1]))

def two_dec_back():
    a=3.1456
    print(f"hello {a:.2f}")

def fib():
    n=int(input("Enter no"))
    first=0 
    second=1
    for i in range(n):
        print(first,end=" ")
        result=first+second
        first=second
        second=result

def arm_pal():
    user=input("Enter a palimdrone no")
    if user == user[::-1]:
        print("Palimdrome")
    else:
        print("Not palimdrome")

    answer=0
    user_second=input("Enter a number")
    power=len(user_second)
    for numbers in user_second:
        cvt=int(numbers)
        result=cvt**power
        answer+=result
    user_typed = int(user_second)
    if answer == user_typed:
        print("Armstrong")
    else:
        print("Not Armstrong")


def string_formatting():
    name="Momin"
    #The modulu operator
    print("Hello there %s"%(name))

    #the f-string 
    print(f"hello ther {name}")

    #.format()
    print("Heloo world {}".format(name))

    #.center()
    print(name.center(8,"1"))

    #template()
    text=Template("hello there $n")
    text1=text.substitute(n=name)
    print(text1)


def main():
    string_formatting()

main()