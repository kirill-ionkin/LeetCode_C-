# Is Anagram
# https://neetcode.io/problems/is-anagram

from typing import List, Tuple, Dict, Any

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_dict, t_dict = {}, {}
        for s_ in s:
            s_dict[s_] = s_dict.get(s_, 0) + 1

        for t_ in t:
            t_dict[t_] = t_dict.get(t_, 0) + 1
    
        return s_dict == t_dict


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): 
            return False

        s_dict = {}
        for s_ in s:
            s_dict[s_] = s_dict.get(s_, 0) + 1

        for t_ in t:
            if t_ not in s_dict:
                return False
            
            if s_dict[t_] == 0:
                return False
            
            s_dict[t_] -=1
        return True