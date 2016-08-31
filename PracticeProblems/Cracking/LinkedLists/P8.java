public class P8{
    public static void main(String[] Args){
        LinkedList ll = new LinkedList();
        int t,l;
        if (Args.length < 2) {
            t = 4; l = 4;
        }else {
            t = Integer.parseInt(Args[0]);
            l = Integer.parseInt(Args[1]);
        }

        for (int tail = 0; tail < t; ++tail){
            for (int loop = 0; loop < l; ++loop){
                ll.constructLoop(tail, loop);
                int data = ll.detectLoop().data;
                if (data != 0){
                    System.out.println("FAILED:  " +tail + ", " + loop  + ". Got " + data);
                    System.out.print("         ");
                    ll.print(tail + loop );
                }
                else{
                    System.out.println("SUCCESS: " + tail + ", " + loop);
                }
            }
        }
    }
}
