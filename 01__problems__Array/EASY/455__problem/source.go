package leetcode

import "sort"

// 455. Assign Cookies
// https://leetcode.com/problems/assign-cookies/description/

func findContentChildren(g []int, s []int) int {
	g_len := len(g)
	s_len := len(s)

	sort.Slice(g, func(i, j int) bool {
		return g[i] < g[j]
	})
	sort.Slice(s, func(i, j int) bool {
		return s[i] < s[j]
	})

	count := 0
	for i, j := g_len-1, s_len-1; i >= 0 && j >= 0; {
		if s[j] >= g[i] {
			count++
			j--
			i--
		} else {
			i--
		}
	}
	return count
}
