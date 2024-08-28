# Max Water Container
# https://neetcode.io/problems/max-water-container

from typing import List, Tuple, Dict, Any

class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l, r = 0, len(heights) - 1

        max_area = 0
        while (l < r):
            h_l, h_r = heights[l], heights[r]

            area = min(h_l, h_r) * (r - l)
            max_area = max(max_area, area)

            if h_l >= h_r:
                r -= 1
            else:
                l += 1
        
        return max_area