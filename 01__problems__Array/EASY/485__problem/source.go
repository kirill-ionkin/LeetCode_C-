package leetcode

// 485. Max Consecutive Ones
// https://leetcode.com/problems/max-consecutive-ones/description/

func findMaxConsecutiveOnes(nums []int) int {
	n := len(nums)

	start := -1
	max_count, count := 0, 0

	for i := 0; i < n; i++ {
		if nums[i] == 1 {
			count++

			if start == -1 {
				start = i
			}
		} else {
			if start != -1 {
				max_count = max(max_count, count)
				start = 0
				count = 0
			}
		}
	}
	max_count = max(max_count, count)

	return max_count
}
