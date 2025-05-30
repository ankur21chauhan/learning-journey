#importing math for rounding up the number 
import math
#defing functions and telling what to do 
def paint_cal(height, width, cover):
    area = height * width
    num_of_cans = math.ceil(area / cover)
    print(f"You'll need {num_of_cans} cans for painting your wall ")

#input parameters 
test_h=int(input("Height of the WAll ="))
test_w=int(input("Widhth of the WALL ="))


#according to question  1 can of paint can cover  square meter of th wall
coverage=5

#giving functions there parameters
paint_cal(height=test_h,  width=test_w,   cover=coverage)

    