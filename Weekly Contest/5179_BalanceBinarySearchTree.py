# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def balanceBST(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        def toArray(root):
            res = []
            if root is None:
                return res
            res = toArray(root.left)
            res.append(root.val)
            right = toArray(root.right)
            return res + right
        res = toArray(root)
        def toBalanceTree(arr):
            if len(arr) < 1:
                return None
            if len(arr) == 1:
                return TreeNode(arr[0])
            mid = len(arr)//2
            root = TreeNode(arr[mid])
            root.left = toBalanceTree(arr[:mid])
            root.right = toBalanceTree(arr[mid+1:])
            return root

        return toBalanceTree(res)