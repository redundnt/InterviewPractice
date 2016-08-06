class BTNode(object):
    def __init__(self, val):
        self.val    = val
        self.left   = None
        self.right  = None

    def get_left(self):
        return self.left

    def get_right(self):
        return self.right

    def get_val(self):
        return self.val

    def set_left(self, l):
        self.left = l

    def set_right(self, r):
        self.right = r

    def set_val(self, v):
        self.val = v
    
    def add(self, val):
        ''' add node n to tree '''
        
        if self.val < val:
            if self.get_right() == None:
                self.set_right(BTNode(val))
            else:
                self.get_right().add(val)

        elif self.val > val:
            if self.get_left() == None:
                self.set_left(BTNode(val))
            else:
                self.get_left().add(val)
        
        else:
            n = BTNode(val)
            n.set_left(self.left)
            self.set_left(n)

    def height(self):
        if self.left == None:
            if self.right == None:
                return 0
            return 1 + self.right.height()
        if self.right == None:
            return 1 + self.left.height()
        return 1 + max(self.left.height(), self.right.height())
    
    def size(self):
        sizel = 0
        sizer = 0

        if self.left != None: 
            sizel = self.left.size()
        if self.right != None:
            sizer = self.right.size()
        return sizel + sizer + 1 

    def postorder_traversal(self):
        res = []
        if self.left != None:
            res += self.left.postorder_traversal()
        if self.right != None:
            res += self.right.postorder_traversal()
        res.append(self.val)
        return res
    def preorder_traversal(self):
        res = [self.val]
        if self.left != None:
            res += self.left.preorder_traversal()
        if self.right != None:
            res += self.right.preorder_traversal()
        return res
    def inorder_traversal(self):
        res = []
        if self.left != None:
            res += self.left.inorder_traversal()
        res.append(self.val)
        if self.right != None:
            res += self.right.inorder_traversal()
        return res

class BinaryTree(object):
    def __init__(self):
        self.root = None
     
    
