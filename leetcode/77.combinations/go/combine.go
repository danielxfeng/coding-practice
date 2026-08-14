package combine

func combine(n int, k int) [][]int {
	res := make([][]int, 0)
	path := make([]int, 0)

	var backtrack func(int, int, int)

	backtrack = func(n int, k int, start int) {
		if len(path) == k {
			tmp := make([]int, k)
			copy(tmp, path)
			res = append(res, tmp)
			return
		}

		for i := start; i <= n; i++ {
			path = append(path, i)
			backtrack(n, k, i+1)
			path = path[:len(path)-1]
		}
	}

	backtrack(n, k, 1)

	return res
}
