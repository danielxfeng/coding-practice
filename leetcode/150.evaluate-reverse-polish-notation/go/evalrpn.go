package evalrpn

import (
	"strconv"
)

type simpleStack struct {
	s []int
}

func (s *simpleStack) pop() bool {
	if len(s.s) == 0 {
		return false
	}

	s.s = s.s[:len(s.s)-1]
	return true
}

func (s *simpleStack) peek() (int, bool) {
	if len(s.s) == 0 {
		return 0, false
	}

	return s.s[len(s.s)-1], true
}

func (s *simpleStack) isEmpty() bool {
	return len(s.s) == 0
}

func (s *simpleStack) push(v int) {
	s.s = append(s.s, v)
}

func evalRPN(tokens []string) int {
	stack := simpleStack{}

	for _, v := range tokens {
		switch v {
		case "+", "-", "*", "/":
			n2, ok2 := stack.peek()
			if !ok2 {
				return 0
			}

			stack.pop()

			n1, ok1 := stack.peek()
			if !ok1 {
				return 0
			}

			stack.pop()

			res := 0
			switch v {
			case "+":
				res = n1 + n2
			case "-":
				res = n1 - n2
			case "*":
				res = n1 * n2
			case "/":
				res = n1 / n2
			default:
				return 0
			}

			stack.push(res)
		default:
			n, err := strconv.Atoi(v)
			if err != nil {
				return 0
			}
			stack.push(n)
		}
	}

	res, ok := stack.peek()
	stack.pop()

	if !ok || !stack.isEmpty() {
		return 0
	}

	return res
}
