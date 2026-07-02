package minsubarraylen

func minSubArrayLen(target int, nums []int) int {
	return minSubArrayLenOptimized(target, nums)
}

// N, 1
func minSubArrayLenOptimized(target int, nums []int) int {
	curr := len(nums) + 1
	sum := 0
	s := 0

	for f, v := range nums {
		sum += v

		for sum >= target {
			length := f - s + 1
			if length < curr {
				curr = length
			}

			sum -= nums[s]
			s++
		}
	}

	if curr == len(nums)+1 {
		return 0
	}
	return curr
}
