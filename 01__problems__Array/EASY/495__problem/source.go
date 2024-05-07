package leetcode

// 495. Teemo Attacking
// https://leetcode.com/problems/teemo-attacking/description/

func findPoisonedDuration(timeSeries []int, duration int) int {
	n := len(timeSeries)

	total_seconds := 0

	for i := 0; i < n-1; i++ {
		total_seconds += min(timeSeries[i+1]-timeSeries[i], duration)
	}
	total_seconds += duration

	return total_seconds
}
