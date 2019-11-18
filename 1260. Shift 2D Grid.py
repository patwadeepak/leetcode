# Author: Deepak Kumar
import numpy as np

class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        
        np_grid = np.array(grid)
        n,m = np_grid.shape
        np_grid = np_grid.reshape(-1)
        
        # calculate effective shift
        shift = k%(n*m)
        
        a = list(np_grid)[-shift:]
        b = list(np_grid[:-shift])
        a.extend(b)
                
        return np.array(a).reshape(n,m).tolist()