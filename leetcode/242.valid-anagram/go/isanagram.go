package validanagram

// N, N
func isAnagram(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}

	m := make(map[rune]int, 26)

	for _, ch := range s {
		m[ch]++
	}

	for _, ch := range t {
		m[ch]--

		if m[ch] < 0 {
			return false
		}
	}

	return true
}
