package canconstruct

// M+N, 1
func canConstruct(ransomNote string, magazine string) bool {
	m := make([]int, 26)

	for _, ch := range ransomNote {
		m[dist(ch)]++
	}

	for _, ch := range magazine {
		m[dist(ch)]--
	}

	for i := range 26 {
		if m[i] > 0 {
			return false
		}
	}

	return true
}

func dist(ch rune) int {
	return (int)(ch - 'a')
}
