
class node:
	def __init__(self, data):
		self.data = data
		self.left = None
		self.right = None

	def insert(self,data):
			if data < self.data:
				if self.left is None:
					self.left = node(data)
				else:
					self.left.insert(data)
			elif data > self.data:
				if self.right is None:
					self.right = node(data)
				else:
					self.right.insert(data)
			else:
				self.data = data
	def print(self):
		print(self.data)
	
	def PrintTree(self):
		if self.left:
			self.left.PrintTree()
		print(self.data)
		if self.right:
			self.right.PrintTree()

class binarytree:
	def __init__(self,root):
		self.root = node(root)
	
	def print(self, traversal):
		if traversal =="inorder":
			return self.preorder(tree.root, "")
	
	def preorder(self, start, traversal):
		if start:
			traversal = self.preorder(start.left, traversal)
			traversal += (str(start.data)+ "-")
			traversal = self.preorder(start.right, traversal)
		return traversal

	
tree = binarytree(1)
tree.root.left = node(2)
tree.root.right = node(3)
tree.root.left.left = node(4)
tree.root.left.right = node(5)
tree.root.left.left.left = node(7)
print(tree.print("inorder"))
	
	
	
	
	
	