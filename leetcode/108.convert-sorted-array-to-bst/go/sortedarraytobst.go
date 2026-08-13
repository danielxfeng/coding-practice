package sortedarraytobst

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func sortedArrayToBST(nums []int) *TreeNode {
	return traversal(nums, 0, len(nums))
}

func traversal(nums []int, left int, right int) *TreeNode {
	if left >= right {
		return nil
	}
	
	mid := left + (right - left) / 2
	
	root := TreeNode{Val: nums[mid]}

	root.Left = traversal(nums, left, mid)
	root.Right = traversal(nums, mid + 1, right)

	return &root
}
