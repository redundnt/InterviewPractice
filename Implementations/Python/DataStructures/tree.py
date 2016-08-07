class TreeNode(object):
    def __init__(self, val):
        self.children = []
        self.parent = None
        self.val = val
    
    def add(self, val):
        node = TreeNode(val)
        node.parent = self
        self.children.append(node)
    
    def number_of_children(self):
        return len(children)

    def size(self):
        res = sum([ n.size() for n in self.children] ) + self.number_of_children()
        
    def get_child(self, n):
        assert isinstance(n, int)
        return children[n]

    def size(self):
        return sum( [ size(n) for n in children] ) + 1

        
