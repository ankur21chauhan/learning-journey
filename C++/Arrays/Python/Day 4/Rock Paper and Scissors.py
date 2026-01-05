import random
print('''               Welcome to the nostalgic game the ROCK PAPER & SCISSORS !!!
      
                                        Rock = 0
                                        Paper = 1
                                        Scissors = 2 ''')



list1=['Rock','Paper','Scissors']
user_input=int(input("Enter the number you want to play = "))
computer_choice=random.randint(0,2)
print(f"Computer Chooses {computer_choice}")
if user_input==0 and computer_choice==2:
    print("You Wins !!!")
elif user_input==0 and computer_choice==1:
    print("You Loose !!!")
elif user_input==1 and computer_choice==2:
    print("You Loose !!!")
elif user_input==1 and computer_choice==0:
    print("You Wins !!!")
elif  user_input==2 and computer_choice==0:
    print("You Loose !!!")
elif  user_input==2 and computer_choice==1:
    print("You Wins !!!")
elif user_input==computer_choice:
    print("Oh! it's a draw")
elif user_input>2:
    print("Enter the Value Less or Equal than 2")






