# Duplicate Integer
# https://neetcode.io/problems/duplicate-integer

from typing import List, Tuple, Dict, Any

class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        for num in nums:
            if num in seen:
                return True
            seen.add(num)
        return False