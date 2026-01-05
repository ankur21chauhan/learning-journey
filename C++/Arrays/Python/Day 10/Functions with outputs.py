#functions with outputs
#here f_name,l_name are parameters

def format_name(f_name,l_name):
    if f_name == "" or l_name == "":
        return "You didn't provide valid inputs"
    formatted_f_name=f_name.title()
    formatted_l_name=l_name.title()
    return f"Result : {formatted_f_name} {formatted_l_name}"
 

print(format_name(input("What is your first name ?"),input("What is you last name ?")))

def format_name(f_name, l_name):
    """take the first and the last name and format it to return the tile case version of the name.

    Args:
        f_name (string): first name
        l_name (string): last name
    """
    if f_name == "" or l_name == "": 
        return "You didn't provide valid inputs"
    formatted_f_name=f_name.title()
    formatted_l_name=l_name.title()
    return f"Result : {formatted_f_name} {formatted_l_name}"
format_name()
 
        
        