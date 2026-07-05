package mylinklist

type ListNode struct {
	Val  int
	Next *ListNode
}

type MyLinkedList struct {
	Head *ListNode
	Size int
}

func Constructor() MyLinkedList {
	return MyLinkedList{Head: &ListNode{}}
}

func (this *MyLinkedList) Get(index int) int {
	if index < 0 || this.Size <= index {
		return -1
	}

	curr := this.Head.Next

	for range index {
		curr = curr.Next
	}

	return curr.Val
}

func (this *MyLinkedList) AddAtHead(val int) {
	newHead := ListNode{Val: val, Next: this.Head.Next}
	this.Head.Next = &newHead
	this.Size++
}

func (this *MyLinkedList) AddAtTail(val int) {
	newHead := ListNode{Val: val}

	curr := this.Head

	for curr.Next != nil {
		curr = curr.Next
	}

	curr.Next = &newHead
	this.Size++
}

func (this *MyLinkedList) AddAtIndex(index int, val int) {
	if index > this.Size {
		return
	}

	if index < 0 {
		index = 0
	}

	curr := this.Head

	for range index {
		curr = curr.Next
	}

	newHead := ListNode{Val: val, Next: curr.Next}
	curr.Next = &newHead

	this.Size++
}

func (this *MyLinkedList) DeleteAtIndex(index int) {
	if index < 0 || index >= this.Size {
		return
	}

	curr := this.Head

	for range index {
		curr = curr.Next
	}

	curr.Next = curr.Next.Next
	this.Size--
}
