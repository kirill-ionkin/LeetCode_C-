package leetcode

// 575. Distribute Candies
// https://leetcode.com/problems/distribute-candies/description/

func distributeCandies(candyType []int) int {
	candy_set := map[int]bool{}

	for _, candy := range candyType {
		candy_set[candy] = true
	}

	return min(len(candyType)/2, len(candy_set))
}
