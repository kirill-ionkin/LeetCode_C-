# Largest Rectangle In Histogram
# https://neetcode.io/problems/largest-rectangle-in-histogram

from typing import List, Tuple, Dict, Any

class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        n = len(heights)
        
        max_area = 0
        stack = []

        for i, h in enumerate(heights):
            if not len(stack):
                stack.append((i, h))
                continue
            
            i_poped = None
            while True:
                prev_i, prev_h = stack.pop()

                if prev_h <= h:
                    stack.append((prev_i, prev_h))
                    stack.append((i if i_poped is None else i_poped, h))
                    break
                
                area = prev_h * (i - prev_i)
                max_area = max(max_area, area)

                i_poped = prev_i

                if not len(stack):
                    stack.append((i_poped, h))
                    break

        while len(stack):
            i, h = stack.pop()

            area = h * (n - i)
            max_area = max(max_area, area)
        
        return max_area