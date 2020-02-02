# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxProduct(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def get_sum(root):
            if root is None:
                return 0
            return get_sum(root.left) + root.val + get_sum(root.right)
        total = get_sum(root)
        def traverse(root):
            if root is None:
                return 0, 0
            left, left_sum = traverse(root.left)
            right, right_sum = traverse(root.right)
            return max(left, right, left_sum*(total-left_sum), right_sum*(total-right_sum)), left_sum+right_sum+root.val
        return traverse(root)[0] % (10**9 + 7)