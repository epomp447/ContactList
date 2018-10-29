# python ex4.py

#####################################################
# get contact list from user
def init():

# create an empty list
    contacts = []
    try:
        print("Enter size: ")
        size = int(input())
        for i in range(size):
            print("Enter Contact ", i, " Name:")
            name = input()
            print("Enter Contact ", i, " Phone:")
            phone = int(input())
            print("Enter Student ", i, " email:")
            email = input()
            # dynamically add to the list a dictionary (hash) item
            contacts.append({'name': name, 'phone': phone, 'email': email})
    except TypeError:
        print("Invalid Input: ")
        exit(1)
    except ValueError:
        print("Invalid Input: ")
        exit(1)
    return contacts
#####################################################
# print the list
def display(s):
    for i in range(len(s)):
        print(s[i]['name'], " ", s[i]['phone'], " ", s[i]['email'])
    return
#####################################################
# main module starts here
contacts = init()
display(contacts)
