# Anagram Groups
# https://neetcode.io/problems/anagram-groups

from typing import List, Tuple, Dict, Any
from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        map_anagrams = defaultdict(list)

        for str_ in strs:
            key = 0
            for char in str_:
                key += 10 ** ord(char)

            map_anagrams[key].append(str_)

        return [val for key, val in map_anagrams.items()]