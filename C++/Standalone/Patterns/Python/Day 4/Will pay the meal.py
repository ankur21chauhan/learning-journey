#random.choice
import random
name_string=input("Enter the names and make sure that those are seperated by a comma :")
name=name_string.split(", ")
#lenght
num1=len(name)
#lenght-1 for the point of index
random_name=random.randint(0,num1   -1)

#creating a varable for the name to be print

person_who_will_pay=name[random_name]
print(person_who_will_pay, "will pay the meal today")


