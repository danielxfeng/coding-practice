package canconstruct

// M+N, 1
func canConstruct(ransomNote string, magazine string) bool {
	characterCounts := make([]int, 26)

	for _, ch := range ransomNote {
		characterCounts[dist(ch)]++
	}

	for _, ch := range magazine {
		characterCounts[dist(ch)]--
	}

	for i := range 26 {
		if characterCounts[i] > 0 {
			return false
		}
	}

	return true
}

func dist(ch rune) int {
	return (int)(ch - 'a')
}
