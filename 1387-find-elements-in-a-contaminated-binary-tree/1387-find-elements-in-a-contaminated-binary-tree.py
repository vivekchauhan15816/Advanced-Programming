# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class FindElements(object):

    def __init__(self, root):
        self.values = set()  # Store recovered values

        if not root:  
            return

        queue = [(root, 0)]  

        while queue:
            node, val = queue.pop(0)
            node.val = val  
            self.values.add(val)

            if node.left:
                queue.append((node.left, 2 * val + 1))
            if node.right:
                queue.append((node.right, 2 * val + 2))

    def find(self, target):
        return target in self.values



