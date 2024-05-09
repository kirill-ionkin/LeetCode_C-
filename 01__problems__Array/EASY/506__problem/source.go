package leetcode

import (
	"sort"
	"strconv"
)

// 506. Relative Ranks
// https://leetcode.com/problems/relative-ranks/description/

func findRelativeRanks(score []int) []string {
	n := len(score)

	score_map_idx := map[int]int{}

	for i, num := range score {
		score_map_idx[num] = i
	}

	// sort score
	sort.Slice(score, func(i, j int) bool {
		return score[i] > score[j]
	})

	ranks := make([]string, n, n)
	for i := 0; i < n; i++ {
		idx := score_map_idx[score[i]]

		switch i {
		case 0:
			ranks[idx] = "Gold Medal"
		case 1:
			ranks[idx] = "Silver Medal"
		case 2:
			ranks[idx] = "Bronze Medal"
		default:
			ranks[idx] = strconv.Itoa(i + 1)
		}
	}
	return ranks
}
