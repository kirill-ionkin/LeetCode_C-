# Two Integer Sum
# https://neetcode.io/problems/two-integer-sum

from typing import List, Tuple, Dict, Any

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        diff_map = {}
        for i in range(len(nums)):
            num = nums[i]

            if num in diff_map:
                return [diff_map[num], i]

            diff_map[target - num] = i 