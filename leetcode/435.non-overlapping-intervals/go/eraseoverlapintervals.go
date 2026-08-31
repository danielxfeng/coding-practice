package eraseoverlapintervals

import "slices"

func eraseOverlapIntervals(intervals [][]int) int {
	if len(intervals) < 2 {
		return 0
	}

	slices.SortFunc(intervals, cmp)

	prevIdx := 0
	res := 0

	for i := 1; i < len(intervals); i++ {
		if intervals[i][0] >= intervals[prevIdx][1] {
			prevIdx = i
			continue
		}

		res++
	}

	return res
}

func cmp(a, b []int) int {
	if a[1] != b[1] {
		return a[1] - b[1]
	}
	return a[0] - b[0]
}
