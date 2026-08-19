package permuteii

func permuteUnique(nums []int) [][]int {
	res := [][]int{}

	var backtrack func(start int)

	backtrack = func(start int) {
		if start == len(nums) {
			tmp := make([]int, len(nums))
			copy(tmp, nums)
			res = append(res, tmp)
			return
		}

		used := make(map[int]struct{})

		for i := start; i < len(nums); i++ {
			if _, ok := used[nums[i]]; ok {
				continue
			}

			used[nums[i]] = struct{}{}

			nums[start], nums[i] = nums[i], nums[start]
			backtrack(start + 1)
			nums[start], nums[i] = nums[i], nums[start]
		}
	}

	backtrack(0)
	return res
}
