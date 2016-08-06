class Queue(object):
    def __init__(self):
        self.q = []

    def push(self, val):
        self.q.append(val)

    def pop(self):
        try:
            res = self.q[0]
            self.q = self.q[1:]
            return res
        except:
            raise IndexError("Queue is empty")
    
    def peek(self):
        try:
            return self.q[0]
        except:
            raise IndexError("Queue is empty")

    def isEmpty(self):
        return self.q == []
