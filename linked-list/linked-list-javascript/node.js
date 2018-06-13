class Node {
    constructor(element) {
        this.element = element;
        this.next = null;
    }
}


class LinkedList{
    constructor(){
        this.head = null;
        this.size = 0;
    }

    //adds element at the end of the list
    add(element) {
        var node = new Node(element); //A new node
        var current; //Stores current node

        if(this.head == null)
            this.head = node;
        else{
            current = this.head;
            while(current.next){
                current = current.next;
            }
            current.next = node;
        }

        this.size++;
    }



    insertAt(element, location) {
        if(location>0 && location >this.size){
            return false;
        }
        else {
            // creates a new node
        var node = new Node(element);
        var curr, prev;
 
        curr = this.head;
        if (location == 0) {
            node.next = head;
            this.head = node;
        } else {
            curr = this.head;
            var it = 0;
             while (it < location) {
                it++;
                prev = curr;
                curr = curr.next;
            }
             node.next = curr;
            prev.next = node;
        }
        this.size++;

        }

    }

    removeFrom(location) {
        if (location > 0 && location > this.size)
        return -1;
    else {
        var curr, prev, it = 0;
        curr = this.head;
        prev = curr;

        if (index === 0) {
            this.head = curr.next;
        } else {

            while (it < index) {
                it++;
                prev = curr;
                curr = curr.next;
            }
t
            prev.next = curr.next;
        }
        this.size--;

        return curr.element;
    }

    }
    removeElement(element) {


    }

    isEmpty() {

    }

    sizeofList(){

    }

    printList(){

    }



}