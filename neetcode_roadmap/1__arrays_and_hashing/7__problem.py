# Products of Array Discluding Self
# https://neetcode.io/problems/products-of-array-discluding-self

from typing import List, Tuple, Dict, Any

# 1. Solution, using division operator
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        
        n_zeros = 0
        zero_idx = None
        
        product = 1
        for i, num in enumerate(nums):
            if num == 0:
                n_zeros += 1
                zero_idx = i

                if n_zeros == 2:
                    return [0] * n
            else:
                product *= num
        
        answer = [0] * n
        if n_zeros == 1:
            answer[zero_idx] = product
        else:
            for i in range(n):
                answer[i] = int(product / nums[i])
        
        return answer

# 2. Solution, without division operaror - using prefix and postfix products
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        if not n:
            return nums

        prefix_products = [1] * n
        postfix_products = [1] * n

        for i in range(n):
            prefix_products[i] = prefix_products[i - 1 if i > 0 else 0] * nums[i]

        for i in range(n - 1, -1, -1):
            postfix_products[i] = postfix_products[i + 1 if i < n - 1 else n - 1] * nums[i]

        answer = [0] * n
        for i in range(n):
            answer[i] = (prefix_products[i - 1] if i > 0 else 1) * (postfix_products[i + 1] if i < n - 1 else 1)

        return answer  

# 3. Solution, without division operaror - using prefix and postfix products + less memory use
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = [1] * (len(nums))

        for i in range(1, len(nums)):
            res[i] = res[i-1] * nums[i-1]
        postfix = 1
        for i in range(len(nums) - 1, -1, -1):
            res[i] *= postfix
            postfix *= nums[i]
        return res