# Car Fleet
# https://neetcode.io/problems/car-fleet

from typing import List, Tuple, Dict, Any

class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        n = len(position)
        
        position_map_idx = {position[i]: i for i in range(n)}

        # sort position and speed by position
        position.sort(reverse=True)
        speed = [speed[position_map_idx[p]] for p in position]

        n_fleets = 1
        t_fleet = (target - position[0]) / speed[0]
        for i in range(1, n):
            p_i, speed_i = position[i], speed[i]
            t_i = (target - p_i) / speed_i

            if t_i > t_fleet:
                n_fleets += 1
                t_fleet = t_i
        
        return n_fleets