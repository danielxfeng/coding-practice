package assigncookie

import "slices"

func findContentChildren(g []int, s []int) int {
	slices.Sort(g)
	slices.Sort(s)
	res := 0
	j := 0

	for i := range s {
		if j >= len(g) {
			break
		}

		if s[i] >= g[j] {
			j++
			res++
		}
	}

	return res
}
