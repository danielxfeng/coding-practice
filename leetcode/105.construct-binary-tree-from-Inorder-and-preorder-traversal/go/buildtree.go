package constructbinarytreefrominorderandpreordertraversal

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func buildTree(preorder []int, inorder []int) *TreeNode {
	if len(preorder) == 0 || len(preorder) != len(inorder) {
		return nil
	}

	return traversal(preorder, 0, len(preorder), inorder, 0, len(inorder))
}

func traversal(preorder []int, preLeft int, preRight int, inorder []int, inLeft int, inRight int) *TreeNode {
	if preLeft >= preRight {
		return nil
	}

	rootVal := preorder[preLeft]
	root := &TreeNode{Val: rootVal}

	splitIdx := findIdx(inorder, inLeft, inRight, rootVal)
	leftLen := splitIdx - inLeft

	root.Left = traversal(preorder, preLeft+1, preLeft+1+leftLen, inorder, inLeft, splitIdx)
	root.Right = traversal(preorder, preLeft+1+leftLen, preRight, inorder, splitIdx+1, inRight)

	return root
}

func findIdx(nums []int, left int, right int, target int) int {
	for i := left; i < right; i++ {
		if nums[i] == target {
			return i
		}
	}
	return -1
}
