import random
letters=['a','A','b','B','c','C','d','D','e' ,'E','f','F','g','G','h','H','i','I','j','J','k','K','l','L','m','M','n','N','o','O','p','P','q','Q','r','R','s','S','t','T','u','U','v','V','w','W','x','X','y','Y','z','Z']
numbers=['0','1','2','3','4','5','6','7','8','9']
symbols=["!","@","#","$","%","^","&","*","(",")"]
print("Welcome to the password generator !!!")


nm_letters=int(input("Enter the Letters you want to add in the password \n"))
nm_numbers=int(input("Enter the Numbers you want to add in the password \n"))
nm_symbols=int(input("Enter the Symbols you want to add in the password \n"))


password=""
for char in range(1,nm_letters+1):
    password+=random.choice(letters)

for char in range(1, nm_numbers+1):
    password+=random.choice(numbers)
    
for char in range(1,nm_symbols+1):
    password+=random.choice(symbols)
pswrd=list(password)
random.shuffle(pswrd)
p2=''.join(pswrd)
    
print(p2)
