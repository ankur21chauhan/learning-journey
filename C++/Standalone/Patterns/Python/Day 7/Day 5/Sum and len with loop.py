students_height=input("Input a list of student heights ").split()


total_height= 0
for height in students_height:
    total_height+=height
print(total_height)


number_of_students=0
for student in students_height:
    number_of_students += 1
print(number_of_students) 