''' A linked list implementation in python '''

class Node(object):
    def __init__(self, val, n=None, p=None):
        self.val = val
        self.n = n
        self.p = p

    def set_next(self, node):
        assert isinstance(node, Node) or node == None
        self.n = node

    def set_prev(self, node):
        assert isinstance(node, Node) or node == None
        self.p = node

    def get_next(self):
        return self.n

    def get_prev(self):
        return self.p
    
    def get_val(self):
        return self.val

class LinkedList(object):
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0 # Hold this explicitly to cut down on computation time

    def append(self, val):
        node = Node(val)
        self.size += 1
        if self.head == None:
            self.head = self.tail = node
            return
        self.tail.set_next(node)
        node.set_prev(self.tail)
        self.tail = node
    
    def prepend(self, val):
        node = Node(val)
        self.size += 1
        if self.head == None:
            self.head = self.tail = node
            return
        self.head.set_prev(node)
        node.set_next(self.head)
        self.head = node
    
    def find(self, val):
        node = self.head
        i = 0
        while node != None:
            if node.get_val() == val:
                return i
            i += 1
            node = node.get_next()
        return -1
