package removeduplicates

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

func (s *simpleStack) Peek() (rune, bool) {
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

func (s *simpleStack) Export() string {
	return string(s.s)
}

func removeDuplicates(s string) string {
	stack := simpleStack{}

	for _, v := range s {
		prev, ok := stack.Peek()

		if ok && prev == v {
			stack.Pop()
		} else {
			stack.Push(v)
		}
	}

	return stack.Export()
}
