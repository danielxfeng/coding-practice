package maxslidingwindow

type monotonicQueue struct {
	s []int
}

func (mq *monotonicQueue) pop(v int) {
	if len(mq.s) > 0 && v == mq.s[0] {
		mq.s = mq.s[1:]
	}
}

func (mq *monotonicQueue) top() (int, bool) {
	if len(mq.s) == 0 {
		return 0, false
	}

	return mq.s[0], true
}

func (mq *monotonicQueue) push(v int) {
	for len(mq.s) > 0 && mq.s[len(mq.s)-1] < v {
		mq.s = mq.s[:len(mq.s)-1]
	}

	mq.s = append(mq.s, v)
}

func maxSlidingWindow(nums []int, k int) []int {
	if len(nums) == 0 || k <= 0 || k > len(nums) {
		return []int{}
	}

	res := make([]int, 0, len(nums)-k+1)

	mq := monotonicQueue{}

	for i := range k {
		mq.push(nums[i])
	}

	top, _ := mq.top()
	res = append(res, top)

	for r := k; r < len(nums); r++ {
		l := r - k

		mq.pop(nums[l])
		mq.push(nums[r])

		top, _ = mq.top()
		res = append(res, top)
	}

	return res
}
