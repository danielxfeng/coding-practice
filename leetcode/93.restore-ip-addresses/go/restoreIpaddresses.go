package restoreip

import (
	"strconv"
	"strings"
)

func restoreIpAddresses(s string) []string {
	res := make([]string, 0)
	path := make([]string, 0)

	var backtrack func(start int)

	backtrack = func(start int) {
		if start >= len(s) && len(path) == 4 {
			ip := strings.Join(path, ".")
			res = append(res, ip)
			return
		}

		for i := start; i < len(s); i++ {
			if len(path) >= 4 {
				break
			}

			part := s[start : i+1]
			if !isValidIpPart(part) {
				continue
			}

			path = append(path, part)
			backtrack(i + 1)
			path = path[:len(path)-1]
		}
	}

	backtrack(0)
	return res
}

func isValidIpPart(s string) bool {
	if len(s) > 1 && s[0] == '0' {
		return false
	}

	if len(s) > 3 {
		return false
	}

	i, err := strconv.Atoi(s)
	if err != nil {
		return false
	}

	return i >= 0 && i <= 255
}
