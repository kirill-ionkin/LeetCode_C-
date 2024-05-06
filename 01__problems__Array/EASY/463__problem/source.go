package leetcode

// 463. Island Perimeter
// https://leetcode.com/problems/island-perimeter/description/

func islandPerimeter(grid [][]int) int {
	n, m := len(grid), len(grid[0])

	P := 0
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if grid[i][j] == 1 {
				P += 4

				// check top
				if i-1 >= 0 && grid[i-1][j] == 1 {
					P--
				}

				// check bottom
				if i+1 < n && grid[i+1][j] == 1 {
					P--
				}

				// check right
				if j+1 < m && grid[i][j+1] == 1 {
					P--
				}

				// check left
				if j-1 >= 0 && grid[i][j-1] == 1 {
					P--
				}
			}
		}
	}
	return P
}
