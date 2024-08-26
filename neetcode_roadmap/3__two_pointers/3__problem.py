# Three Integer Sum
# https://neetcode.io/problems/three-integer-sum

from typing import List, Tuple, Dict, Any

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        
        nums.sort()

        result = set()
        for i, num in enumerate(nums[:-2]):
            if num > 0:
                break
            
            target = -num
            l, r = i + 1, n - 1
            while (l < r):
                sum_ = nums[l] + nums[r]

                if sum_ == target:
                    triplet = (num, nums[l], nums[r])

                    result.add(triplet)
                    l += 1

                elif sum_ > target:
                    r -= 1
                else:
                    l += 1
        
        return [list(triplet) for triplet in result]