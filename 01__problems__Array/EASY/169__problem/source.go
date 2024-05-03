package leetcode

// 169. Majority Element
// https://leetcode.com/problems/majority-element/description/

func majorityElement(nums []int) int {
	candidate := 0
	count := 0

	for _, num := range nums {
		if count == 0 {
			candidate = num
		}

		if num != candidate {
			count--
		} else {
			count++
		}
	}

	return candidate
}
