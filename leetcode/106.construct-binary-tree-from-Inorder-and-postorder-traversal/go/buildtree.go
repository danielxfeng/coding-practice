package constructbinarytreefrominorderandpostordertraversal

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func buildTree(inorder []int, postorder []int) *TreeNode {
	if len(inorder) == 0 || len(inorder) != len(postorder) {
		return nil
	}

	prev := TreeNode{}
	traversal(inorder, 0, len(inorder), postorder, 0, len(postorder), &prev, false)
	return prev.Right
}

func traversal(inorder []int, inLeft int, inRight int, postorder []int, postLeft int, postRight int, prev *TreeNode, isLeft bool) {
	if inLeft >= inRight {
		return
	}

	rootVal := postorder[postRight-1]
	root := &TreeNode{Val: rootVal}
	if isLeft {
		prev.Left = root
	} else {
		prev.Right = root
	}

	splitIdx := findIdx(inorder, inLeft, inRight, rootVal)
	leftSize := splitIdx - inLeft
	postRight--

	traversal(inorder, inLeft, splitIdx, postorder, postLeft, postLeft+leftSize, root, true)
	traversal(inorder, splitIdx+1, inRight, postorder, postLeft+leftSize, postRight, root, false)
}

func findIdx(nums []int, left int, right int, target int) int {
	for i := left; i < right; i++ {
		if nums[i] == target {
			return i
		}
	}
	return -1
}
