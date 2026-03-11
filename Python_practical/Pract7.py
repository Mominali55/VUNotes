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

main()
