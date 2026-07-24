package queueusingstack

type MyStack []int

func (s *MyStack) Push(v int) {
	*s = append(*s, v)
}

func (s *MyStack) Pop() int {
	val := (*s)[len(*s)-1]
	*s = (*s)[:len(*s)-1]
	return val
}

func (s *MyStack) Peek() int {
	return (*s)[len(*s)-1]
}

func (s *MyStack) Size() int {
	return len(*s)
}

func (s *MyStack) Empty() bool {
	return s.Size() == 0
}

type MyQueue struct {
	in  MyStack
	out MyStack
}

func Constructor() MyQueue {
	return MyQueue{
		in:  MyStack{},
		out: MyStack{},
	}
}

func (this *MyQueue) Push(x int) {
	this.in.Push(x)
}

func (this *MyQueue) Pop() int {
	if this.out.Empty() {
		for !this.in.Empty() {
			v := this.in.Pop()
			this.out.Push(v)
		}
	}

	return this.out.Pop()
}

func (this *MyQueue) Peek() int {
	if this.out.Empty() {
		for !this.in.Empty() {
			v := this.in.Pop()
			this.out.Push(v)
		}
	}

	return this.out.Peek()
}

func (this *MyQueue) Empty() bool {
	return this.in.Empty() && this.out.Empty()
}
