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

    }

    removeFrom(location) {

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