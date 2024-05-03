package leetcode

// 136. Single Number
// https://leetcode.com/problems/single-number/description/

func singleNumber(nums []int) int {
	base := 1

	for _, num := range nums {
		base ^= num
	}

	if base == 0 {
		return 1
	}
	return base ^ 1
}
