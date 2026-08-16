package combinationsum2

import "slices"

func combinationSum2(candidates []int, target int) [][]int {
	res := make([][]int, 0)
	path := make([]int, 0)
	sum := 0

	var backtrack func(start int)

	backtrack = func(start int) {
		if sum == target {
			tmp := make([]int, len(path))
			copy(tmp, path)
			res = append(res, tmp)
			return
		}

		for i := start; i < len(candidates); i++ {
			if sum+candidates[i] > target {
				break
			}

			if i > start && candidates[i] == candidates[i-1] {
				continue
			}

			path = append(path, candidates[i])
			sum += candidates[i]
			backtrack(i + 1)
			sum -= candidates[i]
			path = path[:len(path)-1]
		}
	}

	slices.Sort(candidates)
	backtrack(0)
	return res
}
