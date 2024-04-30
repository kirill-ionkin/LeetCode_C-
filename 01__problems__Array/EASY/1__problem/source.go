package leetcode

// 1. Two Sum
// https://leetcode.com/problems/two-sum/description/

// 1. First solution
func twoSum(nums []int, target int) []int {
	n := len(nums)

	for i := 0; i < n-1; i++ {
		for j := i + 1; j < n; j++ {
			if nums[i]+nums[j] == target {
				return []int{i, j}
			}
		}
	}

	return nil
}

// 2. Second solution - optimized with map
func twoSum2(nums []int, target int) []int {
	diff_map_idx := map[int]int{}

	for i, n := range nums {
		diff := target - n

		if index, ok := diff_map_idx[diff]; ok {
			return []int{index, i}
		}
		diff_map_idx[n] = i
	}
	return []int{}
}
