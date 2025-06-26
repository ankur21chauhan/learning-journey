print("                         Welcome to the Dominos")
print("                         Small, Medium, Large ")
print("                            Small Pizza $15")
print("                           Medium Pizza $20")
print("                            Large Pizza $25")

pizza=input("Select Pizza :")
bill=0
if pizza =='S':
    bill+=15
    print("Small Pizza $15")
elif pizza =='M':
    bill+=20
    print("Medium Pizza $20")
elif pizza == 'L':
    bill+=25
    print("Large Pizza $25")

    
additionals=input("Do you want to add Pepperoni ? Y or N =")
if additionals=="Y":
        bill+=3
        print(f"Your bill is ${bill}")
    
else:
    ("Choose the correct option")
additionals2=input("Do you want to have extra cheese costs $0.5 ? Y or N =")

if additionals2 =="Y":
    bill+=0.5
    print(f"Your final bill is ${bill} ")
    print("Have a nice day ")

    
    
    
