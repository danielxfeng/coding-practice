package lettercombinations

func letterCombinations(digits string) []string {
	letters := []string{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}
	res := []string{}
	path := []byte{}

	var backtrack func(int)

	backtrack = func(start int) {
		if len(path) == len(digits) {
			res = append(res, string(path))
			return
		}

		options := letters[int(digits[start]-'0')-2]
		for i := 0; i < len(options); i++ {
			path = append(path, options[i])
			backtrack(start+1)
			path = path[:len(path)-1]
		}
	}

	backtrack(0)
	return res
}
