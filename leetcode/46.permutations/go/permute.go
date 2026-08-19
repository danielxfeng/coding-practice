package permute

func permute(nums []int) [][]int {
	res := [][]int{}

	var backtrack func(start int)

	backtrack = func(start int) {
		if start == len(nums) {
			tmp := make([]int, len(nums))
			copy(tmp, nums)
			res = append(res, tmp)
			return
		}

		for i := start; i < len(nums); i++ {
			nums[start], nums[i] = nums[i], nums[start]
			backtrack(start + 1)
			nums[start], nums[i] = nums[i], nums[start]
		}
	}

	backtrack(0)
	return res
}
