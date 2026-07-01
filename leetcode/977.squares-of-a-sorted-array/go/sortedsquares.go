package sortedsquares

import "sort"

func sortedSquares(nums []int) []int {
	return sortedSquaresBruteForce(nums)
}

func sortedSquaresBruteForce(nums []int) []int {
	arr := make([]int, 0, len(nums))

	for _, n := range nums {
		arr = append(arr, n*n)
	}

	sort.IntSlice(arr).Sort()

	return arr
}
