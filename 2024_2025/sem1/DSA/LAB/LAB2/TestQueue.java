import java.util.*;
public class TestQueue {
	public static void main (String[] args) {
		// you can use any one of the following implementations
		//QueueArr <String> queue= new QueueArr <String> (); // Array
		//QueueLL <String> queue= new QueueLL <String> (); // LinkedList composition
		QueueLLE <Integer> queue= new QueueLLE <Integer> (); // LinkedList inheritance

		System.out.println("queue is empty? " + queue.isEmpty());
		queue.offer(8);
		queue.offer(10);
		queue.offer(1);
		queue.offer(6);
		queue.offer(5);
        queue.print();
    }
}
