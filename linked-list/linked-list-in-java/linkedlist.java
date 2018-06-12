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

    public void addAtTail(Object dat){
		Node temp = head;
		while(temp.next != null)
		{
			temp = temp.next;
		}
		
		temp.next = new Node(dat);
		numNodes++;
    }

    public void addAtIndex(int index, Object dat) {
		Node temp = head;
		Node holder;
		for(int i=0; i < index-1 && temp.next != null; i++)
		{
			temp = temp.next;
		}
		holder = temp.next;
		temp.next = new Node(dat);
		temp.next.next = holder;
		numNodes++;
    }
    
    public void deleteAtIndex(int index) {
		Node temp = head;
		for(int i=0; i< index - 1 && temp.next != null; i++)
		{
			temp = temp.next;
		}
		temp.next = temp.next.next;
		numNodes--;
    }
    
    public static int find(Node n) {
		Node t = head;
		int index = 0;
		while(t != n)
		{
			index++;
			t = t.next;
		}
		return index;
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