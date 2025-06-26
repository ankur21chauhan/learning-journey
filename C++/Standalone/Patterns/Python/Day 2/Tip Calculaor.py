print("Welcome to the tip calculator !")
total_bill=float(input("Enter your total bill = $" ))
tip=int(input("How much percent tip you want to give 10%, 12%, 15%"))
people=int(input("Enter the total number to split the bill :"))
bill_with_tip=tip/100*total_bill+total_bill
bill_per_person=total_bill/people
final_amount=round(bill_per_person,2)
print(f"Each person should pay ${final_amount}")