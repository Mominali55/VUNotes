
number=[10,20,30,40,50,60]
table=[1,2,3,4,5]

#Question 1

def avg_number():
    total=0
    length=len(number)
    for num in number:
        total+=num
    
    #Calculate
    avg=total/length
    print(avg)

#Question 2

def table():
    n=int(input("enter a number"))
    for i in  range(1,11):
        print(f"{i} * {n} = {i*n}")

#Question 3

def reverse():
    user_str=input("enter a no")
    length=len(user_str)
    counter=2
    while counter < length:
        print(user_str[::-1],end="")
        counter+=1
        

#Question 4


def sum():
    user_input = [1,2,3,4,5,6,7,8,9,10]
    list_length = len(user_input)

    sum=0

    while  list_length > 0:
        if sum == 9:
            break
        sum+=user_input[sum]
    
    print(sum)

#Question 5

def fibnocci():
    user_val=int(input("Enter a number: "))
    new_val=1
    old_val=0
    while old_val < user_val:
        print(old_val,end=" ")
        temp = old_val
        old_val = new_val
        new_val = temp + new_val


def main():
    # avg_number()
    # table()
    # reverse()
    # sum()
    fibnocci()

main()

    