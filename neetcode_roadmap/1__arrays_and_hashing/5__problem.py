# Top K Elements in List
# https://neetcode.io/problems/top-k-elements-in-list

from typing import List, Tuple, Dict, Any

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        most_frequent_k = []

        num_map_count = {}
        for num in nums:
            num_map_count[num] = num_map_count.get(num, 0) + 1
        
        n = len(nums)
        freq_nums = [[] for _ in range(n + 1)]
        for num, count in num_map_count.items():
            freq_nums[count].append(num)
        
        for i in range(n, 0, -1):
            nums_ = freq_nums[i]
            for num in nums_:
                most_frequent_k.append(num)

                if len(most_frequent_k) == k:
                    return most_frequent_k
        
        return most_frequent_k