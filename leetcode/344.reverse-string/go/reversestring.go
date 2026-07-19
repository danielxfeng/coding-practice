package revercestring

// N, 1
func reverseString(s []byte) {
	i := 0
	j := len(s) - 1

	for i < j {
		temp := s[i]
		s[i] = s[j]
		s[j] = temp

		i++
		j--
	}
}
