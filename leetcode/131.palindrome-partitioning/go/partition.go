package palindromepartitioning

func partition(s string) [][]string {
	res := make([][]string, 0)
	path := make([]string, 0)

	var backtrack func(start int)

	backtrack = func(start int) {
		if start >= len(s) {
			tmp := make([]string, len(path))
			copy(tmp, path)
			res = append(res, tmp)
			return
		}

		for i := start; i < len(s); i++ {
			if isPalindrome(s, start, i) {
				path = append(path, s[start:i+1])
				backtrack(i + 1)
				path = path[:len(path)-1]
			}
		}
	}

	backtrack(0)
	return res
}

func isPalindrome(s string, start int, end int) bool {
	for start < end {
		if s[start] != s[end] {
			return false
		}

		start++
		end--
	}

	return true
}
