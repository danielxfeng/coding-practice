package mergeintervals

import "slices"

func merge(intervals [][]int) [][]int {
	if len(intervals) == 0 {
		return [][]int{}
	}

	slices.SortFunc(intervals, cmp)

	res := make([][]int, 0)

	left := intervals[0][0]
	right := intervals[0][1]

	for i := 1; i < len(intervals); i++ {
		if intervals[i][0] > right {
			res = append(res, []int{left, right})
			left = intervals[i][0]
			right = intervals[i][1]
			continue
		}

		if intervals[i][0] < left {
			left = intervals[i][0]
		}

		if intervals[i][1] > right {
			right = intervals[i][1]
		}
	}

	return append(res, []int{left, right})
}

func cmp(a, b []int) int {
	if a[0] != b[0] {
		return a[0] - b[0]
	}
	return a[1] - b[1]
}
