
 class BasicLinkedList implements ListInterface {
	private Node head;

    public BasicLinkedList() {
        head = null;
    }

    @Override
    public Node getHead() {
        return head;
    }
 
    @Override
    public void addFirst(Integer data) {
        Node newNode = new Node(data, head);
        head = newNode;
    }

    @Override
    public void removeFirst() {
        if (head == null) {
            return;
        }

        head = head.getNext();
    }

    @Override 
    public void removeCurr(Node curr) {
        
    }

    @Override 
    public int countEvenItem() {
        return 0;
    }

    @Override 
    public int countPrimeItem() {
        return 0;
    }

    @Override
    public void addBeforeTheFirstEvenElement(Node x) {

    }

    @Override
    public int findMaximum() {
        return 0;
    }

    @Override
    public void reverseListWithOutTempList() {
        
    }






}