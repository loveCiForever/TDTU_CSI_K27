public class TestCharLinkedList {
    public static void main(String[] args) {
        CharLinkedList list = new CharLinkedList();

        list.addFirst('z');
        list.addFirst('a');
        list.addFirst('b');
        list.addFirst('c');
        list.addFirst('d');
        list.addFirst('e');
        list.printList();

        list.addAfterFirstKey('A', 'b');
        list.printList();

        int largestCharPostition = list.largestCharPostition();
        System.out.println("Largest Char Postion = " + largestCharPostition);
    }
}
