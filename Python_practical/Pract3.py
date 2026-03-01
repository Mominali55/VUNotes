# Practical 3

from datetime import datetime,date
from zoneinfo import ZoneInfo


#Question1
def current_time():
    t=datetime.now()
    print(t)


def current_year():
    t=datetime.today()
    print(t.year)
    print(t.month)
    print(t.day)
    today=datetime.now(ZoneInfo("Asia/Kolkata"))
    print(today.strftime("%I:%M %p"))



#Question 2
def eligibility():
    user=input("Enter your birthdate is this format year-month-day")
    year,month,day=user.split("-")
    user_year=int(year)
    to_check_18=date.today()
    current_year=to_check_18.year

    user_age=current_year-user_year
    
    #Checking for eligibility
    if user_age > 18:
        print("Eligible")
    else:
        print("Not Eligible")



def main():
    #current_time()
    #current_year()
    eligibility()

main()


