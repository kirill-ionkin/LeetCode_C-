package leetcode

// 27. Remove Element
// https://leetcode.com/problems/remove-element/

func removeElement(nums []int, val int) int {
	n := len(nums)
	var j int = -1

	for i := 0; i < n; i++ {
		if nums[i] == val && j == -1 {
			j = i
		} else if nums[i] != val && j != -1 {
			// swap
			nums[i], nums[j] = nums[j], nums[i]
			j++
		}
	}

	if j == -1 {
		return n
	} else {
		return j
	}
}
