import dis

def calculate_area(radius:float)->float : #Hint to developer wht type of value will be passed on in this
    """
    Calcualate are of a circle
    """
    pi=3.14159
    return pi * (radius **2)

if __name__ == "__main__":
    print("--Python bytecode intruction--")
    dis.dis(calculate_area)