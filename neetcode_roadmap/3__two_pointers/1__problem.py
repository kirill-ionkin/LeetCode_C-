# Is Palindrome
# https://neetcode.io/problems/is-palindrome

from typing import List, Tuple, Dict, Any

class Solution:
    def isPalindrome(self, s: str) -> bool:
        l, r = 0, len(s) - 1

        while l < r:
            l_char, r_char = s[l], s[r]
            
            l_char_not_valid = not l_char.isalnum()
            r_char_not_valid = not r_char.isalnum()

            if l_char_not_valid or r_char_not_valid: 
                l += l_char_not_valid
                r -= r_char_not_valid
                continue
            
            if l_char.lower() != r_char.lower():
                return False
            
            l += 1
            r -= 1
        return True