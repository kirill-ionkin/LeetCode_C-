# Valid Sudoku
# https://neetcode.io/problems/valid-sudoku

from typing import List, Tuple, Dict, Any

class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = {i : set() for i in range(9)}
        cols = {i : set() for i in range(9)}
        squares = {i: set() for i in range(9)}

        for i in range(9):
            for j in range(9):
                field = board[i][j]
                if field == ".":
                    continue
                
                num = int(field)

                row_idx = i
                col_idx = j
                square_idx = (i // 3) * 3 + (j // 3)

                if num in rows[row_idx]:
                    return False
                if num in cols[col_idx]:
                    return False
                if num in squares[square_idx]:
                    return False
                
                rows[row_idx].add(num)
                cols[col_idx].add(num)
                squares[square_idx].add(num)
        
        return True
