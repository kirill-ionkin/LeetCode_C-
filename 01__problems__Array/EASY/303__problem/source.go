package leetcode

// 303. Range Sum Query - Immutable
// https://leetcode.com/problems/range-sum-query-immutable/description/

type NumArray struct {
	nums    []int
	cum_sum []int
}

func Constructor(nums []int) NumArray {
	n := len(nums)

	cum_sum := make([]int, n, n)
	cum_sum[0] = nums[0]

	for i := 1; i < n; i++ {
		cum_sum[i] = cum_sum[i-1] + nums[i]
	}

	return NumArray{nums, cum_sum}
}

func (this *NumArray) SumRange(left int, right int) int {
	return this.cum_sum[right] - this.cum_sum[left] + this.nums[left]
}

/**
 * Your NumArray object will be instantiated and called as such:
 * obj := Constructor(nums);
 * param_1 := obj.SumRange(left,right);
 */
