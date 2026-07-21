package reversewords

import "strings"

func reverseWords(s string) string {
	spaceRemoved := resolveSpace(s)
	reversedBytes := resolveLine(spaceRemoved)
	return resolveWords(reversedBytes)
}

func resolveSpace(s string) string {
	var sb strings.Builder
	sb.Grow(len(s))

	for i := 0; i < len(s); i++ {
		if s[i] == ' ' {
			continue
		}

		if sb.Len() > 0 && s[i-1] == ' ' {
			sb.WriteByte(' ')
		}
		sb.WriteByte(s[i])
	}

	return sb.String()
}

func resolveLine(s string) []byte {
	str := []byte(s)

	start := 0
	end := len(s) - 1

	for start < end {
		temp := str[start]
		str[start] = str[end]
		str[end] = temp

		start++
		end--
	}

	return str
}

func resolveWords(s []byte) string {
	start := 0

	for i := 0; i <= len(s); i++ {
		if i == len(s) || s[i] == ' ' {
			end := i - 1

			for start < end {
				temp := s[start]
				s[start] = s[end]
				s[end] = temp
				start++
				end--
			}
			start = i + 1
		}
	}

	return string(s)
}
