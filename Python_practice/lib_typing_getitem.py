from typing import Dict, Optional

# Name           Type Hint    value
#  ↓                 ↓          ↓
USER_DATABASE: Dict[str, int] = {"momin":7487,
                                "mike":8456,
                                "tommy":7738,
                                "coco":7333,
                                "chicu":28932
                                }

def get_user_pass(username:str) -> Optional[int]: #here we use optional bcz teh return value can be "int" or "none"
    """
    Retrieves password for a given username.
    Returns None if user is not found.
    """
    #Coverting to lower case + removing spaces
    clean_username = username.strip().lower() 

    # the get method proffesional way
    # Instead of 'if x in y:', dictionaries have a .get() method.
    # It tries to find the key. If not found, it returns None (or a default you specify).
    return USER_DATABASE.get(clean_username)

if __name__ == "__main__":
    user_input = input("Enter a name: ")
    password = get_user_pass(user_input)
    if password:
        print(f"\n Username found, your password is: {password}")
    else:
        print("\n Username not found.")