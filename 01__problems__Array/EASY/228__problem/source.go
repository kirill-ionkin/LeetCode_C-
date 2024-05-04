package leetcode

import "strconv"

// 228. Summary Ranges
// https://leetcode.com/problems/summary-ranges/description/

func summaryRanges(nums []int) []string {
	ans := []string{}

	n := len(nums)

	if n == 0 {
		return ans
	}

	start := 0
	end := 0

	for end < n {
		if start == end {
			end++
			continue
		}

		if nums[end]-nums[start] == (end - start) {
			end++
			continue
		} else if nums[end]-nums[start] > (end - start) {
			if end-start == 1 {
				ans = append(ans, strconv.Itoa(nums[start]))
				start = end
			} else if end-start > 1 {
				ans = append(ans, strconv.Itoa(nums[start])+"->"+strconv.Itoa(nums[end-1]))
				start = end
			}
		}
	}
	if end-start == 1 {
		ans = append(ans, strconv.Itoa(nums[start]))
	} else {
		ans = append(ans, strconv.Itoa(nums[start])+"->"+strconv.Itoa(nums[end-1]))
	}

	return ans
}
