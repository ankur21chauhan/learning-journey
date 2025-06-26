print("                 Welcome to the love Calculator")
name1=input("Enter Your Name :")
name2=input("Enter Your Lover Name :")
combined_str=name1 +  name2
lowercase_str=combined_str.lower()
  
t=lowercase_str.count('t')  
r=lowercase_str.count('r')  
u=lowercase_str.count('u')  
e=lowercase_str.count('e')


true=t+r+u+e 

l=lowercase_str.count('l')  
o=lowercase_str.count('o')  
v=lowercase_str.count('v')  
e=lowercase_str.count('e')

love=l+o+v+e


love_score=str(true) + str(love)
x=int(love_score)

if x<50:
    
    print(f"Your score is {x} which is less and cannot be lovers")
elif x>50 and x<70:
    print(f"You can be Friends with the score {x}")
elif x>70:
    print(f"Your score is {x} Awesome !! You both are made for each other ")

else:
    print("Please enter the correct statements")