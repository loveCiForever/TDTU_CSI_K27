class CharLinkedList implements ListInterface {
    private Node head;

    public CharLinkedList() { 
        head = null;
    }

    @Override
    public Node getHead() {
        return head;
    }
 
    @Override
    public void addFirst(char data) {
        Node newNode = new Node(data, head);
        head = newNode;
    }

    @Override
    public boolean addAfterFirstKey(char data, char key) {
        Node currNode = head;
        while (currNode != null) { 
            if(currNode.getData() == key) {
                Node newNode = new Node(data, currNode.getNext());
                currNode.setNext(newNode);
            }
            currNode = currNode.getNext();             
        }
        return false;    
    }

    @Override
    public int largestCharPostition() {
        if(head == null) {
            return -1;
        }
        char maxValue = head.getData();
        int maxPosition = 0;
        Node currNode = head;
        int currPostion = 0;

        while(currNode != null) {
            if(currNode.getData() > maxValue) {
                maxValue = currNode.getData();
                maxPosition = currPostion;
            }
            currPostion++;
            currNode = currNode.getNext();
        }
        return maxPosition;
    }

    public void printList() {
        Node current = head;
        while (current != null) {
            System.out.print(current.getData() + " -> ");
            current = current.getNext();
        }
        System.out.println("null");
    }
}
