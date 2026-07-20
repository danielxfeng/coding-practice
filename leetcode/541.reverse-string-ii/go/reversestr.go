package reversestr

import "strings"

func reverseStr(s string, k int) string {
	return reverseStrOptimized(s, k)
}

func reverseStrOptimized(s string, k int) string {
	str := []byte(s)

	for i := 0; i < len(str); i += 2 * k {
		start := i
		end := min(i+k, len(s)) - 1

		for start < end {
			temp := str[start]
			str[start] = str[end]
			str[end] = temp
			start++
			end--
		}
	}

	return string(str)
}

func reverseStrBasic(s string, k int) string {
	var res strings.Builder
	res.Grow(len(s))

	for i := 0; i < len(s); i += 2 * k {
		start := 0
		length := min(k, len(s)-i)
		end := length - 1

		buf := make([]byte, length)
		for start <= end {
			buf[start] = s[i+end]
			buf[end] = s[i+start]
			start++
			end--
		}

		res.Write(buf)

		twoKLength := min(2*k, len(s)-i)

		for j := length + i; j < i+twoKLength; j++ {
			res.WriteByte(s[j])
		}

	}

	return res.String()
}
