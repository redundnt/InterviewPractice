public class LinkedList{
    public Node head;
    public LinkedList(){
        head = null;
    }
    public void constructLoop(int tail, int loop){
        head = new Node(0);     // This will be start of loop
        Node m = head;

        for (int i = 1; i < loop; ++i){
            m.next = new Node(i);
            m = m.next;
        }
        m.next = head;
        for (int i = 0; i < tail; ++i){
            m = new Node(loop + i);
            m.next = head;
            head = m;
        }
    }
    public Node detectLoop(){
        int size = 0;
        Node l, r;
        l = head;
        r = head;
        for (int i = 0; i < 2; ++i){
            if (r == null) return null;
            r = r.next;
        }
        while (true){
            l = l.next;
            size += 1;
            if (l == r) break;  // found r
            r = r.next;
            if (r == null) return null;
            r = r.next;
            if (r == null) return null;
            if (r == l) break;
        }
        int loopSize = 0;
        do { l = l.next; loopSize += 1;} while (l != r);
        int tailSize = size % loopSize;
        while (tailSize > 0){
            l = l.next;
            --tailSize;
        }
        return l;
    }

    public void print(int depth){
        Node n = head;
        for (int i = 0; i < depth; ++i){
            System.out.print(n.data + " -> ");
            n = n.next;
        }
        System.out.println(n.data);
    }
}
