package minsubarraylen

func minSubArrayLen(target int, nums []int) int {
	return minSubArrayLenOptimized(target, nums)
}

// N, 1
func minSubArrayLenOptimized(target int, nums []int) int {
	minimumLength := len(nums) + 1
	windowSum := 0
	windowStart := 0

	for windowEnd, v := range nums {
		windowSum += v

		for windowSum >= target {
			length := windowEnd - windowStart + 1
			if length < minimumLength {
				minimumLength = length
			}

			windowSum -= nums[windowStart]
			windowStart++
		}
	}

	if minimumLength == len(nums)+1 {
		return 0
	}
	return minimumLength
}
