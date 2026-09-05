package monotoneincreasingdigits

import "strconv"

func monotoneIncreasingDigits(n int) int {
	arr := []byte(strconv.Itoa(n))
	marker := len(arr)

	for i := len(arr) - 1; i > 0; i-- {
		if arr[i-1] > arr[i] {
			arr[i-1]--
			marker = i
		}
	}

	for i := marker; i < len(arr); i++ {
		arr[i] = '9'
	}

	res, _ := strconv.Atoi(string(arr))
	return res
}
