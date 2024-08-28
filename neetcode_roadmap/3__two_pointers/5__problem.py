# Trapping Rain Water
# https://neetcode.io/problems/trapping-rain-water

from typing import List, Tuple, Dict, Any

# 1. Using prefix and postfix sum, no pointers
class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)

        if n <= 2:
            return 0
        
        prefix_max_height = [0] * n
        postfix_max_height = [0] * n
        for i in range(n):
            h = height[i]
            prefix_max_height[i] = max(prefix_max_height[i - 1], h) if i > 0 else h
        
        for i in range(n - 1, -1, -1):
            h = height[i]
            postfix_max_height[i] = max(postfix_max_height[i + 1], h) if i < n - 1 else h
        
        sum_area = 0
        for i in range(1, n - 1):
            area = max(0, min(prefix_max_height[i - 1], postfix_max_height[i + 1]) - height[i])
            sum_area += area
        
        return sum_area
    
