# 1. randomly choose a word from the list and assign a word a variable
import random
word_list = ['love', 'snow', 'shimla']
random_choice = random.choice(word_list)
print(random.choice) 


# 2. Ask the user to guess the letter and assign their answer to the variable called guess. make guess lowercase
guess = input("Guess a letter :").lower


# 3. Check the letter if the user guessed is one of the letter in the choosen words. 
for letter in random_choice:
    if letter == guess:
        print("right")
    else:
        print("Wrong")
        
