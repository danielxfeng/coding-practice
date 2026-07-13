package happynumber

func isHappy(n int) bool {
	s := make(map[int]struct{})

	for {
		n = sumSquares(n)

		if n == 1 {
			return true
		}

		if _, exists := s[n]; exists {
			return false
		}

		s[n] = struct{}{}
	}
}

func sumSquares(n int) int {
	total := 0

	for n > 0 {
		r := n % 10
		total += r * r
		n /= 10
	}

	return total
}
