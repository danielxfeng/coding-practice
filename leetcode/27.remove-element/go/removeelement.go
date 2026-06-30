package removeelment

func removeElement(nums []int, val int) int {
	return removeElementOptimized(nums, val)
}

// N, 1
func removeElementOptimized(nums []int, val int) int {
	s := 0

	for f := range nums {
		if nums[f] != val {
			swap(nums, f, s)
			s++
		}
	}

	return s
}

func swap(nums []int, i int, j int) {
	if i == j {
		return
	}

	temp := nums[i]
	nums[i] = nums[j]
	nums[j] = temp
}
