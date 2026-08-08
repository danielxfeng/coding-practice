package validanagram

// N, K
func isAnagram(s string, t string) bool {
	return isAnagramArray(s, t)
}

func isAnagramArray(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}

	characterCounts := make([]int, 26)

	for _, ch := range s {
		characterCounts[dist(ch)]++
	}

	for _, ch := range t {
		i := dist(ch)

		characterCounts[i]--
		if characterCounts[i] < 0 {
			return false
		}
	}

	return true
}

func dist(ch rune) int {
	return (int)(ch - 'a')
}

func isAnagramBasic(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}

	characterCounts := make(map[rune]int, 26)

	for _, ch := range s {
		characterCounts[ch]++
	}

	for _, ch := range t {
		characterCounts[ch]--

		if characterCounts[ch] < 0 {
			return false
		}
	}

	return true
}
