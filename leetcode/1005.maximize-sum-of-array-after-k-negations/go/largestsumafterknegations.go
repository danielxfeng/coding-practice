package maxsumofarrayafterknegations

import (
	"math"
	"slices"
)

func largestSumAfterKNegations(nums []int, k int) int {
	slices.SortFunc(nums, func(a, b int) int {
		return int(math.Abs(float64(b)) - math.Abs(float64(a)))
	})

	sum := 0

	for i := range nums {
		if nums[i] < 0 && k > 0 {
			nums[i] = -nums[i]
			k--
		}

		sum += nums[i]
	}

	if k%2 == 1 {
		sum -= 2 * nums[len(nums)-1]
	}

	return sum
}
