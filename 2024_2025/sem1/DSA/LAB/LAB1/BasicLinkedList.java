import java.util.*;
class BasicLinkedList <E> implements ListInterface <E> {
	private ListNode <E> head = null;
	private int num_nodes = 0;

	public boolean isEmpty() { return (num_nodes == 0); }

	public int size() { return num_nodes; }

	public E getFirst() throws NoSuchElementException {
		if (head == null) 
			throw new NoSuchElementException("can't get from an empty list");
		else return head.getElement();
	}

	public boolean contains(E item) {
		for (ListNode <E> n = head; n != null; n = n.getNext())
			if (n.getElement().equals(item)) return true;
		return false;
	}
	public void addFirst(E item) {
		head = new ListNode <E> (item, head);
 		//ListNode p = new ListNode (item);
		//p.setNext(head);//p.next = head
		//head = p;

		num_nodes++;
	}

	public E removeFirst() throws NoSuchElementException {
		ListNode <E> ln;
		if (head == null) 
			throw new NoSuchElementException("can't remove from empty list");
		else { 
			ln = head;
			head = head.getNext();
			num_nodes--;
			return ln.getElement();
		}
	}
	public void print() throws NoSuchElementException {
		if (head == null)
			throw new NoSuchElementException("Nothing to print...");

		ListNode <E> ln = head;
		while(ln != null)
        {
			System.out.print(ln.getElement() + " -> ");
            ln = ln.getNext();//i++
		}
		System.out.println("null");
	}
    public void addLast(E item)
    {
        if (head == null)
        {
            addFirst(item);
            return;
        }
        ListNode<E> q = head;
        while (q.getNext() != null) 
        {
            q = q.getNext();    
        }
        ListNode<E> p = new ListNode<E>(item, null);
        //p.setNext(null);
        q.setNext(p);

    }
    public void addAfter (E y, E x)
    {
        ListNode<E> q = head;
        while (q != null) 
        {
            if(q.getElement().equals(y))
                break;
            q = q.getNext();    
        }
        if(q != null)//found y
        {
            ListNode<E> p = new ListNode<E>(x, null);
            p.setNext(q.getNext());
            q.setNext(p);
        }

    }
	public void addAfter(ListNode<E> y, ListNode<E> x)
	{
		//Find Node y
		ListNode<E> q = head;
        while (q != null) 
        {
            if(q.getElement().equals(y.getElement()))
                break;
            q = q.getNext();    
        }
        if(q != null)//found y
        {
            x.setNext(q.getNext());
            q.setNext(x);
        }

	}
	public void removeAfter(E x){
        ListNode<E> q = head;
        ListNode<E> nodeBefore = null;
        ListNode<E> nodeAfter = null;
        while(q != null){
            nodeBefore = q;
            ListNode<E> nodeRemove = nodeBefore.getNext();
            if(nodeRemove.getElement().equals(x))
            {
                nodeAfter = nodeRemove.getNext();
                break;
            }
            q = q.getNext();
        }

        nodeBefore.setNext(nodeAfter);
    }
	
}