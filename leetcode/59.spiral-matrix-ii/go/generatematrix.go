package generatematrix

// N, 1
func generateMatrix(n int) [][]int {
	matrix := make([][]int, n)
	for i := range n {
		matrix[i] = make([]int, n)
	}

	num := 0

	for i := range n / 2 {
		last := n - i - 1

		for it := i; it < last; it++ {
			num++
			matrix[i][it] = num
		}

		for it := i; it < last; it++ {
			num++
			matrix[it][last] = num
		}

		for it := last; it > i; it-- {
			num++
			matrix[last][it] = num
		}

		for it := last; it > i; it-- {
			num++
			matrix[it][i] = num
		}
	}

	if n%2 == 1 {
		num++
		matrix[n/2][n/2] = num
	}

	return matrix
}
