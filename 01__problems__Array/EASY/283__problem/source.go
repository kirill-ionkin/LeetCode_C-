package leetcode

// 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/description/

func moveZeroes(nums []int) {
	n := len(nums)

	zero_idx := 0
	for i := 0; i < n; i++ {
		if nums[i] != 0 {
			nums[i], nums[zero_idx] = nums[zero_idx], nums[i]
			zero_idx++
		}
	}
}
