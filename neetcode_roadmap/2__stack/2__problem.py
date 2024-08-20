# Minimum Stack
# https://neetcode.io/problems/minimum-stack

from typing import List, Tuple, Dict, Any

class MinStack:

    def __init__(self):
        self.values = []
        self.min_values = []

        self.size = 0

    def push(self, val: int) -> None:
        self.values.append(val)
        self.min_values.append(val if self.size == 0 else min(val, self.min_values[-1]))
        self.size += 1

    def pop(self) -> None:
        if not self.size:
            return 
        
        self.size -= 1
        self.values.pop()
        self.min_values.pop()

    def top(self) -> int:
        return self.values[-1]

    def getMin(self) -> int:
        return self.min_values[-1]


# author's solution
class MinStack:
    def __init__(self):
        self.stack = []
        self.minStack = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        val = min(val, self.minStack[-1] if self.minStack else val)
        self.minStack.append(val)

    def pop(self) -> None:
        self.stack.pop()
        self.minStack.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minStack[-1]