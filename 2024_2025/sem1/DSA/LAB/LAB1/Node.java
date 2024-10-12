public class Node{
	private Integer data;
	private Node next;
	
	public Node(Integer data, Node next){
		this.data = data;
		this.next = next;
	}
	
	public Node(){
		this.data = 0;
		this.next = null;
	}
	
	public Integer getData(){
		return this.data;
	}
	
	public Node getNext(){
		return this.next;
	}
	
	public void setNext(Node next){
		this.next = next;
	}	
}