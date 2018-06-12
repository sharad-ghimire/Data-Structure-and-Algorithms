public class LinkedList {
    private static Node head;
    private static int numNodes;

    public static void main(String[] args) {
        System.out.println("Just For Test");
        LinkedList list = new LinkedList(10);
        list.addAtHead(132);
        list.addAtHead(456);
        list.addAtHead(164);
        list.addAtTail(1332);
        list.addAtTail(394);
        list.addAtHead(132);  
    }

    public LinkedList(Object dat) {
		head = new Node(dat);
    }
    
    public void addAtHead(Object dat) {
		Node temp = head;
		head = new Node(dat);
		head.next = temp;
		numNodes++;
	}







    class Node {
        private Node next;
        private Object data;

        public Node(Object dat){
            data = dat;
        }

        public Object getData() {
            return data;
        }
    }

    
}