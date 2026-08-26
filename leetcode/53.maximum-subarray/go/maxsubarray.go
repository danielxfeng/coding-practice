package maxsubarray

func maxSubArray(nums []int) int {
	if len(nums) == 0 {
		return 0
	}

	res := nums[0]
	cur := 0
	for _, v := range nums {
		cur += v

		if cur > res {
			res = cur
		}

		if cur < 0 {
			cur = 0
		}

	}

	return res
}
