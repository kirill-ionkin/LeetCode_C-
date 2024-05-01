package leetcode

// 66. Plus One
// https://leetcode.com/problems/plus-one/description/

func plusOne(digits []int) []int {
	answer := digits

	n := len(digits)
	k := 1

	for i := n - 1; i >= 0 && k > 0; i-- {
		sum := digits[i] + k
		k = sum / 10
		digits[i] = sum % 10
	}

	if k > 0 {
		answer = make([]int, n+1, n+1)
		answer[0] = k

		for i := 0; i < n; i++ {
			answer[i+1] = digits[i]
		}
	}
	return answer
}

// 2. second colution - more readable
func plusOne2(digits []int) []int {
	n := len(digits)

	for i := n - 1; i >= 0; i-- {
		if digits[i] < 9 {
			digits[i]++
			return digits
		}
		digits[i] = 0
	}

	digits = append([]int{1}, digits...)
	return digits
}
