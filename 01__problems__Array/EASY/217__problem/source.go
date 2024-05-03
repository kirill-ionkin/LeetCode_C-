package leetcode

// 217. Contains Duplicate
// https://leetcode.com/problems/contains-duplicate/description/

func containsDuplicate(nums []int) bool {
	num_set := map[int]bool{}

	for _, num := range nums {
		if _, ok := num_set[num]; !ok {
			num_set[num] = true
		} else {
			return true
		}
	}
	return false
}
