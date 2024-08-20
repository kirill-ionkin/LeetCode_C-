# Evaluate Reverse Polish Notation
# https://neetcode.io/problems/evaluate-reverse-polish-notation

from typing import List, Tuple, Dict, Any

class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for token in tokens:
            if token == "+":
                second, first = stack.pop(), stack.pop()
                stack.append(first + second)
            elif token == "-":
                second, first = stack.pop(), stack.pop()
                stack.append(first - second)
            elif token == "*":
                second, first = stack.pop(), stack.pop()
                stack.append(first * second)
            elif token == "/":
                second, first = stack.pop(), stack.pop()
                stack.append(int(first / second))
            else:
                stack.append(int(token))
        return stack.pop()
