package leetcode

import "sort"

// 561. Array Partition
// https://leetcode.com/problems/array-partition/description/

func arrayPairSum(nums []int) int {
	n := len(nums)

	sort.Slice(nums, func(i, j int) bool {
		return nums[i] < nums[j]
	})

	sum := 0
	for i := 0; i < n; i += 2 {
		sum += nums[i]
	}

	return sum
}
