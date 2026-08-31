package partitionlabels

func partitionLabels(s string) []int {
	last := make(map[rune]int)

	for i, ch := range s {
		last[ch] = i
	}

	res := make([]int, 0)

	start := 0
	end := 0

	for i, ch := range s {
		if last[ch] > end {
			end = last[ch]
		}

		if i == end {
			res = append(res, i-start+1)
			start = i + 1
		}
	}

	return res
}
