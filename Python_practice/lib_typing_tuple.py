from typing import Tuple,Optional,List

#A matrix is a list of lists (Rows and columns)
Matrix= list[list[int]]

def search_matrix(matrix: Matrix, target :int)->Optional[Tuple[int,int]]:
    """
    Searches for a target number in a matix.
    Returns the (row,col) coordinates imeadialately upon finding it.
    """
    for row_idx ,row in enumerate(matrix):
        for col_idx,value in enumerate(row):

            if value == target:
                # Super break
                print(f"Found {target} at row {row_idx} at {col_idx}")
                return (row_idx,col_idx)
            
    print("Not found")
    return None

# ---Real world Data (Like pixels in an image or seats in a theater) ---

data_grid = [
    [10,20,30,40],
    [50,60,70,50],
    [90,100,110,120],
    [130,140,150,160]
]


#This will stop as soon as it finds the target
search_matrix(data_grid,70)