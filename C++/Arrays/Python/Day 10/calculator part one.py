#calculator 


#add function
def add(n1,n2):
    return n1+n2

#subtract function
def sub(n1,n2):
    return n1-n2

#multiply function
def multi(n1,n2):
    return n1*n2

#divide function
def divide(n1,n2):
    return n1/n2

#modulus function
def modulus(n1,n2):
    return n1%n2
#square rool
def sqrt(n1):
    return n1**0.5
operations = {
              "+" : add,
              "-" : sub,
              "*" :multi,
              "/":divide,
              "%":modulus,
              "URT" : sqrt
            }

def calculator():
    
    num1 = float(input("Enter the First number: "))


    for symbol in operations:
        print(symbol)

    should_continue = True

    while should_continue:
        operation_symbol=input("Pick an operation")
        
        #num2 will be written here so we can update the second number to out accordance
        num2 = float(input("Enter the Second number: "))
        
        
        
        #picking the symbol from the dictionary
        calculation_function=operations[operation_symbol]
        
        
        #answer
        answer=calculation_function(num1,num2)

        print(f"{num1} {operation_symbol} {num2} = {answer} ")

        if input(f"Type 'y' to continue calculating with {answer}, or type 'n' to start a new calculation.") == "y" and "Y":
            num1 = answer
        else:
            should_continue = False
            calculator()
            
    

calculator()