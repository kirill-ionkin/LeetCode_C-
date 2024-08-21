# Daily Temperatures
# https://neetcode.io/problems/daily-temperatures

from typing import List, Tuple, Dict, Any

class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        result = [0] * len(temperatures)
        
        stack = []
        for i, t in enumerate(temperatures):
            if not len(stack):
                stack.append(i)
                continue

            while len(stack):
                idx_previous = stack.pop()
                t_previous = temperatures[idx_previous]

                if t_previous < t:
                    result[idx_previous] = i - idx_previous
                else:
                    stack.append(idx_previous)
                    break
            stack.append(i)
        
        return result