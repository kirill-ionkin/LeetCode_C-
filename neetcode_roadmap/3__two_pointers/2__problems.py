# Two Integer Sum II
# https://neetcode.io/problems/two-integer-sum-ii

from typing import List, Tuple, Dict, Any

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        n = len(numbers)

        l, r = 0, n - 1
        while (l < r):
            sum_ = numbers[l] + numbers[r]

            if sum_ == target:
                break
            elif sum_ < target:
                l += 1
            else:
                r -= 1

        return [l + 1, r + 1]