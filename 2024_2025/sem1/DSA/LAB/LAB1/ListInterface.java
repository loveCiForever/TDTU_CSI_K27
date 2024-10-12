
public interface ListInterface {
	public Node getHead();

	public void addFirst(Integer data);

	public void removeFirst();
	public void removeCurr(Node curr);

	public int countEvenItem();
	public int countPrimeItem();

	public void addBeforeTheFirstEvenElement(Node x);

	public int findMaximum();

	public void reverseListWithOutTempList();
}
