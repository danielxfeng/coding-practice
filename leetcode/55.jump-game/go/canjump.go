package jumpgame

func canJump(nums []int) bool {
	maximum := 0

	for i, v := range nums {
		if maximum >= len(nums) - 1 {
			return true
		}

		if i > maximum { // cannot access
			return false
		}

		if i + v > maximum {
			maximum = i + v
		}
	}

	return false
}
