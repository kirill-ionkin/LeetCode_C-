# Validate Parentheses
# https://neetcode.io/problems/validate-parentheses

from typing import List, Tuple, Dict, Any

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        brackets_map = {
            "(": ")",
            "{": "}",
            "[": "]"
        }
        
        for char in s:  
            if char in brackets_map:
                stack.append(char)
                continue
            
            if not len(stack):
                return False
            
            open_bracket = stack.pop()
            if brackets_map[open_bracket] != char:
                return False
        
        return False if len(stack) else True