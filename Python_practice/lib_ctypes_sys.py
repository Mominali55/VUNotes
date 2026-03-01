import ctypes
import sys
from typing import Optional

def peek(obj:int)->Optional[int]:
    """ 
    Reads the raw memeory of python object to find 'ob_zise'.
    """
    # 1. Get the memory address of the object
    address =id(obj)

    # 2. In 64-bit Python:
    # - Bytes 0-7: Reference Count (ob_refcnt)
    # - Bytes 8-15: Type Pointer (ob_type)
    # - Bytes 16-23: THE SIZE (ob_size) <-- We want this

    # We create a C-style long integer at that address + 16 bytes offset
    # casting the memory address to a pointer
    offset=16
    internal_size_value = ctypes.c_long.from_address(address + offset).value

    return internal_size_value

# --- Let's test it ---
numbers = [1,2,3,4,5]

print(f"Real list: {numbers}")
print(f"Size via len():  {len(numbers)}")
print(f"Size via Raw Memory: {peek(numbers)}")

# let's add an item and prove the memoery chnages instantly
numbers.append(99)
print("\n--- After appending 99 ---")
print(f"Size via Raw Memory:   {peek(numbers)}")

