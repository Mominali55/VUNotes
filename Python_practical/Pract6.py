citys=["Pune","Mumbai","Delhi","Bangalore"]

citys.append("kokalta")

citys.insert(2,"Solaphur")

print(citys)
print(citys[::2])

for city in citys:
    if city[0] == "P":
        print(city)

citys.pop()

no_list=[1,2,3,4,5,6]

for value in range(len(no_list)):
    resullt=no_list[value]+10
    print(resullt)
