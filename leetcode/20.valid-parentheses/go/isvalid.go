package isvalid

type simpleStack struct {
	s []rune
}

func (s *simpleStack) Pop() bool {
	if len(s.s) == 0 {
		return false
	}

	s.s = s.s[:len(s.s)-1]
	return true
}

func (s *simpleStack) Peak() (rune, bool) {
	if len(s.s) == 0 {
		return '0', false
	}

	return s.s[len(s.s)-1], true
}

func (s *simpleStack) isEmpty() bool {
	return len(s.s) == 0
}

func (s *simpleStack) Push(v rune) {
	s.s = append(s.s, v)
}

func isValid(s string) bool {
	stack := simpleStack{}

	for _, v := range s {
		if prev, ok := stack.Peak(); ok && isMatchedRune(prev, v) {
			stack.Pop()
			continue
		}

		stack.Push(v)
	}

	return stack.isEmpty()
}

func isMatchedRune(a rune, b rune) bool {
	if a == '(' && b == ')' {
		return true
	}

	if a == '[' && b == ']' {
		return true
	}

	if a == '{' && b == '}' {
		return true
	}

	return false
}
