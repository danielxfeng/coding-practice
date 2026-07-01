package sortedsquares

import (
	"sort"
)

func sortedSquares(nums []int) []int {
	return sortedSquaresOptimized(nums)
}

// N, N
func sortedSquaresOptimized(nums []int) []int {
	l := 0
	r := len(nums) - 1
	n := len(nums) - 1

	arr := make([]int, len(nums))

	for n >= 0 {
		sl := nums[l] * nums[l]
		sr := nums[r] * nums[r]

		if sl > sr {
			arr[n] = sl
			l++
		} else {
			arr[n] = sr
			r--
		}

		n--
	}

	return arr
}

// NLogN, N
func sortedSquaresBruteForce(nums []int) []int {
	arr := make([]int, 0, len(nums))

	for _, n := range nums {
		arr = append(arr, n*n)
	}

	sort.IntSlice(arr).Sort()

	return arr
}
