print("                         @@@ Welcome to the ROLLER COSTER !!! @@@")
print("                                 $ Ticket Prices $")
print("                                  Child ticket $5")
print("                                  Youth ticket $10")
print("                                  Adults ticket $12")
print("                                  Note : Wants a photograph clicked $3")
name=input("Enter your Name :")
height=int(input("Enter your Height in cm :"))
bill=0
if height>=120:
    print("What is your Age ?")
    age=int(input("Enter your age :"))
    if age>=12 and age<15:
        bill=5
        print("Child tickets $5")
    elif age>=15 and age<=18:
        bill=10
        print("Youth Tickets $10")
    else: 
        bill=12
        age>18
        print("Adult tickets $12")
    wants_photo=input("Do you want to have a photograph of yours while you are on the ride ? Y or N :")
    if wants_photo =='Y':
        bill += 3
    
    
    print(f"Your final bill is ${bill}"+" Enjoy the ride!!")
        
else:
    print(f"Sorry you have to grow taller before you can ride") 
