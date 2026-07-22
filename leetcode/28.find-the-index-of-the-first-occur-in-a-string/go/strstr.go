package strstr

func strStr(haystack string, needle string) int {
	if len(needle) == 0 {
		return 0
	}

	next := generateNextArr(needle)

	j := 0
	for i := range haystack {
		for j > 0 && haystack[i] != needle[j] {
			j = next[j-1]
		}

		if haystack[i] == needle[j] {
			j++
		}

		if j == len(needle) {
			return i - len(needle) + 1
		}
	}

	return -1
}

func generateNextArr(s string) []int {
	next := make([]int, len(s))

	prefixLen := 0

	for i := 1; i < len(s); i++ {
		for prefixLen > 0 && s[i] != s[prefixLen] {
			prefixLen = next[prefixLen-1]
		}

		if s[i] == s[prefixLen] {
			prefixLen++
		}

		next[i] = prefixLen
	}

	return next
}
