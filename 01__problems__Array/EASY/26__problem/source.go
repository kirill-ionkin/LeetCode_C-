package leetcode

// 26. Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

func removeDuplicates(nums []int) int {
	idx := 0
	for i, num := range nums {
		if i == 0 {
			continue
		}

		if nums[idx] != num {
			nums[idx+1] = num
			idx++
		}
	}
	return idx + 1
}
