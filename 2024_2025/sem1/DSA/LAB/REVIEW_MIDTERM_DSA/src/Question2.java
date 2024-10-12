public class Question2 {
    public static int recur(int n, int k) {
        if(k == 0)
            return 1;
        return n * recur(n, k - 1);
    }

    public static void main(String args[]){
		int resRecur = recur(5, 3);
        System.out.println(resRecur);
	}
}