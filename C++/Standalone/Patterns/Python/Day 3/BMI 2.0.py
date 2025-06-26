height=float(input("Enter your height in m:"))
weight=float(input("Enter your weight in KG:"))
#formula of BMI
BMI=((height)/(weight) ** 2)
if BMI<18.5:
    print("You are underweight")
elif BMI>=18.5 and BMI<25:
    print("You have a normal weight")
elif BMI>=25 and BMI<30:
    print("You are overweight")
elif BMI>30 and BMI<35:
    print("You are obese")
elif BMI>35:
    print("You are clinically obese")

else:
    print("Enter correct Height and Weight")