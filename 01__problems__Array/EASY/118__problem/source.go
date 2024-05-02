package leetcode

// 118. Pascal's Triangle
// https://leetcode.com/problems/pascals-triangle/

func generate(numRows int) [][]int {
	ans := [][]int{{1}, {1, 1}}

	if numRows <= 2 {
		return ans[:numRows]
	}

	for i := 3; i <= numRows; i++ {
		previous_layer := ans[len(ans)-1]
		last_layer := []int{1}
		for j := 1; j < len(previous_layer); j++ {
			last_layer = append(last_layer, previous_layer[j-1]+previous_layer[j])
		}
		last_layer = append(last_layer, 1)

		ans = append(ans, last_layer)
	}
	return ans
}
