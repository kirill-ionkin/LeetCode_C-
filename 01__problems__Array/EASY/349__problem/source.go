package leetcode

// 349. Intersection of Two Arrays
// https://leetcode.com/problems/intersection-of-two-arrays/description/

func intersection(nums1 []int, nums2 []int) []int {
	var ans []int

	num1_set := map[int]bool{}
	num2_set := map[int]bool{}

	for _, num := range nums1 {
		num1_set[num] = true
	}

	for _, num := range nums2 {
		num2_set[num] = true
	}

	for num, _ := range num1_set {
		if _, ok := num2_set[num]; ok {
			ans = append(ans, num)
		}
	}

	return ans
}
