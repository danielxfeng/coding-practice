package combinationsum3

func combinationSum3(k int, n int) [][]int {
	res := make([][]int, 0)
	path := make([]int, 0)
	sum := 0

	var backtrack func(k int, n int, start int)

	backtrack = func(k int, n int, start int) {
		if len(path) == k && sum == n {
			tmp := make([]int, len(path))
			copy(tmp, path)
			res = append(res, tmp)
			return
		}

		for i := start; i <= 9; i++ {
			if sum+i > n {
				break
			}

			path = append(path, i)
			sum += i
			backtrack(k, n, i+1)
			sum -= i
			path = path[:len(path)-1]
		}
	}

	backtrack(k, n, 1)
	return res
}
