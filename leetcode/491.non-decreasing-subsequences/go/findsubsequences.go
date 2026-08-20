package findsubsequences

func findSubsequences(nums []int) [][]int {
	res := make([][]int, 0)
	path := make([]int, 0)

	var backtrace func(int)

	backtrace = func(start int) {
		if len(path) > 1 {
			tmp := make([]int, len(path))
			copy(tmp, path)
			res = append(res, tmp)
		}

		used := make(map[int]struct{}, len(nums))

		for i := start; i < len(nums); i++ {
			if _, ok := used[nums[i]]; ok {
				continue
			}

			if len(path) > 0 && nums[i] < path[len(path)-1] {
				continue
			}

			used[nums[i]] = struct{}{}

			path = append(path, nums[i])
			backtrace(i + 1)
			path = path[:len(path)-1]
		}
	}

	backtrace(0)
	return res
}
