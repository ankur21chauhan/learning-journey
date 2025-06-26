print("                         Welcome to the Treasure Island ")
print("Your mission is to find the Treasure ")
game=input("Press yes to start")
if game=='yes':
    
    direct=input("Will yo go left or right ? L or R ")
    if direct == 'L':
        direct1=input("Will you Swim or Wait ? S or W " )
        if direct=='W':
            direct2=input("Which door colour would you choose ?Red , Blue, Yellow")
            if direct2=='Yellow':
                print("Hurrah You Win")
            else:
                print("Game Over")
        else:
            ("Game Over")
    else:
        ("Game Over")


else:
    print("Game Over")
