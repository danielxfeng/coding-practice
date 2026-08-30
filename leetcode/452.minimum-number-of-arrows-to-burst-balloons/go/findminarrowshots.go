package findminarrowshots

import "slices"

func findMinArrowShots(points [][]int) int {
	if len(points) == 0 {
		return 0
	}

	slices.SortFunc(points, cmp)

	res := 1
	bound := points[0][1]

	for _, p := range points {
		if p[0] <= bound {
			continue
		}

		res++
		bound = p[1]
	}

	return res
}

func cmp(a, b []int) int {
	if a[1] != b[1] {
		return a[1] - b[1]
	}
	return a[0] - b[0]
}
