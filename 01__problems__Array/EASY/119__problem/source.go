package leetcode

// 119. Pascal's Triangle II
// https://leetcode.com/problems/pascals-triangle-ii/description/

func getRow(rowIndex int) []int {
	if rowIndex == 0 {
		return []int{1}
	}

	row := []int{1, 1}
	if rowIndex == 1 {
		return row
	}

	for i := 2; i <= rowIndex; i++ {
		tmp := []int{1}

		for j := 1; j < len(row); j++ {
			tmp = append(tmp, row[j-1]+row[j])
		}
		row = append(tmp, 1)
	}
	return row
}
