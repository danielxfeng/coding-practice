package wigglesubsequence

func wiggleMaxLength(nums []int) int {
	if len(nums) < 2 {
		return len(nums)
	}

	res := 1
	dir := 0

	for i := 1; i < len(nums); i++ {
		diff := nums[i] - nums[i-1]

		if dir == 0 && diff != 0 {
			if diff < 0 {
				dir = -1
			} else {
				dir = 1
			}
			res++
			continue
		}

		if diff*dir < 0 {
			res++
			dir *= -1
		}
	}

	return res
}
