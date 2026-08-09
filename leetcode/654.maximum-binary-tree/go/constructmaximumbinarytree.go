package maximumbinarytree

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func constructMaximumBinaryTree(nums []int) *TreeNode {
	prev := TreeNode{}
	travelsal(nums, &prev, true, 0, len(nums))
	return prev.Left
}

func travelsal(nums []int, prev *TreeNode, isLeft bool, left int, right int) {
	maxIdx, ok := findMaxNum(nums, left, right)
	if !ok {
		return
	}

	maxNode := TreeNode{Val: nums[maxIdx]}

	if isLeft {
		prev.Left = &maxNode
	} else {
		prev.Right = &maxNode
	}

	travelsal(nums, &maxNode, true, left, maxIdx)
	travelsal(nums, &maxNode, false, maxIdx+1, right)
}

func findMaxNum(nums []int, left int, right int) (int, bool) {
	if left >= right {
		return -1, false
	}

	maxIdx := left

	for i := left; i < right; i++ {
		if nums[i] > nums[maxIdx] {
			maxIdx = i
		}
	}

	return maxIdx, true
}
