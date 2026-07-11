package findcommoncharacters

func commonChars(words []string) []string {
	return commonCharsBasic(words)
}

func commonCharsBasic(words []string) []string {
	exists := make([]int, 26)
	minCount := make([]int, 26)
	res := make([]string, 0)

	for _, w := range words {
		existsLocal := make([]int, 26)

		for _, ch := range w {
			i := (int)(ch - 'a')
			existsLocal[i]++
			if existsLocal[i] == 1 {
				exists[i]++
			}
		}

		for i := range 26 {
			if existsLocal[i] > 0 {
				if minCount[i] == 0 || existsLocal[i] < minCount[i] {
					minCount[i] = existsLocal[i]
				}
			}
		}
	}

	for i := range 26 {
		if exists[i] == len(words) {
			for range minCount[i] {
				res = append(res, string(rune('a'+i)))
			}
		}
	}

	return res
}
