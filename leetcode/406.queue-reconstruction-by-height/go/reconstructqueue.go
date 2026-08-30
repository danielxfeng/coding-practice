package restructqueue

import (
	"slices"
)

func reconstructQueue(people [][]int) [][]int {
	slices.SortFunc(people, cmp)

	res := make([][]int, 0, len(people))

	for _, p := range people {
		k := p[1]

		res = append(res, nil)
		copy(res[k+1:], res[k:])
		res[k] = p
	}

	return res
}

func cmp(a, b []int) int {
	if (a[0] != b[0]) {
		return b[0] - a[0]
	}
	return a[1] - b[1]
}
