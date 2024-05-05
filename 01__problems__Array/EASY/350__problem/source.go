package leetcode

// 350. Intersection of Two Arrays II
// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/

func intersect(nums1 []int, nums2 []int) []int {
	var ans []int

	num1_set := map[int]int{}
	num2_set := map[int]int{}

	for _, num := range nums1 {
		num1_set[num]++
	}

	for _, num := range nums2 {
		num2_set[num]++
	}

	for num, count := range num1_set {
		if count2, ok := num2_set[num]; ok {
			intersection_count := min(count, count2)

			for i := 0; i < intersection_count; i++ {
				ans = append(ans, num)
			}
		}
	}

	return ans
}
