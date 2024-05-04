package leetcode

// 268. Missing Number
// https://leetcode.com/problems/missing-number/description/

func missingNumber(nums []int) int {
	n := len(nums)

	sum := n * (n + 1) / 2
	for _, num := range nums {
		sum -= num
	}

	return sum
}
