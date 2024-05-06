package leetcode

import "sort"

// 448. Find All Numbers Disappeared in an Array
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

func findDisappearedNumbers(nums []int) []int {
	n := len(nums)

	sort.Slice(nums, func(i, j int) bool {
		return nums[i] < nums[j]
	})

	ans := []int{}
	for i := 1; i < nums[0]; i++ {
		ans = append(ans, i)
	}

	for i := 1; i < n; i++ {
		if nums[i]-nums[i-1] > 1 {
			for current := nums[i-1] + 1; current < nums[i]; current++ {
				ans = append(ans, current)
			}
		}
	}

	if nums[n-1] < n {
		for d := nums[n-1] + 1; d <= n; d++ {
			ans = append(ans, d)
		}
	}

	return ans
}
