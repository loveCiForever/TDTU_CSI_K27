import java.util.Stack;

public class Question3 {
    public static int calculate(String[] expression) {
        Stack<Integer> myStack = new Stack<Integer>();
        for(String word : expression) {
            if(isNumber(word)) {
                myStack.push(Integer.parseInt(word));
            } else {
                int o1 = myStack.pop();
                int o2 = myStack.pop();
                int o3 = 0;

                switch (word) {
                    case "+":
                        o3 = o2 + o1;
                        break;
                    case "-":
                        o3 = o2 - o1;
                        break;         
                    default:
                        break;
                }
                myStack.push(o3);
            }
        }

        return myStack.pop();
    }

    private static boolean isNumber(String str) {
        return str.matches("0|([1-9][0-9]*)");
    }

    public static void main(String args[]){
		System.out.println(calculate(new String[]{"31", "12", "+"}));
	}
}