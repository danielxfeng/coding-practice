package validanagram

// N, K
func isAnagram(s string, t string) bool {
	return isAnagramArray(s, t)
}

func isAnagramArray(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}

	arr := make([]int, 26)

	for _, ch := range s {
		arr[dist(ch)]++
	}

	for _, ch := range t {
		i := dist(ch)

		arr[i]--
		if arr[i] < 0 {
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
