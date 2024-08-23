# Longest Consecutive Sequence
# https://neetcode.io/problems/longest-consecutive-sequence

from typing import List, Tuple, Dict, Any

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums_set = set(nums)
        
        starts = set()
        for num in nums:
            if num - 1 not in nums_set:
                starts.add(num)
        
        max_length = 0
        for start in starts:
            cur_length = 1
            while True:
                if start + 1 in nums_set:
                    cur_length += 1
                    start = start + 1
                else:
                    max_length = max(max_length, cur_length)
                    break
        
        return max_length
