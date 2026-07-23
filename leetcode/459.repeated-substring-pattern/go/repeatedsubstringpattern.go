package repeatsubstringpattern

func repeatedSubstringPattern(s string) bool {
	if len(s) == 0 {
		return false
	}

	next := getNextArr(s)

	isLastMatch := next[len(s)-1] > 0
	isRemainderMatch := len(s)%(len(s)-next[len(s)-1]) == 0

	return isLastMatch && isRemainderMatch
}

func getNextArr(s string) []int {
	next := make([]int, len(s))

	j := 0
	for i := range s {
		if i == 0 {
			continue
		}

		for j > 0 && s[i] != s[j] {
			j = next[j-1]
		}

		if s[i] == s[j] {
			j++
		}

		next[i] = j
	}

	return next
}
