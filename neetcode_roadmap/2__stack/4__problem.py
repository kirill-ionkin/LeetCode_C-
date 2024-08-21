# Generate Parentheses
# https://neetcode.io/problems/generate-parentheses

from typing import List, Tuple, Dict, Any

class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        stack = []
        def generate(n_opened, n_closed, stack):
            if n_closed == n_opened == n:
                res.append("".join(stack))
                return 
            
            if n_opened < n:
                stack.append("(")
                generate(n_opened + 1, n_closed, stack)
                stack.pop()
            
            if n_closed < n and n_closed < n_opened:
                stack.append(")")
                generate(n_opened, n_closed + 1, stack)
                stack.pop()
        
        generate(0, 0, stack)
        return res