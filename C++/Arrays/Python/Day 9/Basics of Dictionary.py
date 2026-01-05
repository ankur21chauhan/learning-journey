#dictionary syntax = {Key:Value}


programming_dictionaries={"Bug":"An Error in a Program", "Shimla": "A Place in Himachal Pradesh"}
#print(programming_dictionaries["Bug"])

#Adding new items to dictionary.
programming_dictionaries["Apple"] ="Apple is fruit , a company worth 3 Trillion Dollars"

print(programming_dictionaries["Bug"])#Empty Dictionary 
dict1={}
dict1=programming_dictionaries
#print(dict1)#wipe an existing Dictionary#programming_dictionaries={}
#print(programming_dictionaries) 



#Edit an item in the Dictionary 
programming_dictionaries["Bug"]= "A Moth in a computer"
#print(programming_dictionaries["Bug"])


#Loop through a Dictionary 
for key in programming_dictionaries:
    print(key)
    print(programming_dictionaries[key])