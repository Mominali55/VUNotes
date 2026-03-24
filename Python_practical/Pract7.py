#Question 1

def chk_prime(number):
    for num_check in range(2,11):
        if num_check == number:
            continue
        if number % num_check == 0:
            print("Not prime")
            return 0

    print("prime")

def main():
    user_input=int(input("Enter a number (Greater than Zero):"))
    chk_prime(user_input)

#Question 2

def smart_divide(func):
    def wrapper(a,b):
        if b == 0:
            print("Cannot divide by zero")
            return None
        return func(a,b)
    return wrapper
    
@smart_divide
def divide(a,b):
    return a / b


# Question 3

def even_generator(value):
    for num in range(value+1):
        yield(2 * num)

 
    
def main():
    #Question1
    user_input=int(input("Enter a number (Greater than Zero):"))
    chk_prime(user_input)

    #Question2
    print(divide(10,2))

    #Question3
    for num in even_generator(10):
        print(num)
    

main()





# Note:
"""
1.Python sees @smart_divide.
2.Python runs the factory. The factory hits Return #2 (return wrapper). Now, the name divide secretly points to the wrapper function.(if yu manually write "divide = smart_divide(divide)", you will get the same result).
3.Python sees my_answer = divide(10, 2).
4.Python runs the wrapper function, passing in 10 and 2.
5.The wrapper checks if 2 == 0 (False).
6.The wrapper hits Return #1 (return func(10, 2)), which calculates 5.0 and hands it back to my_answer.
"""
