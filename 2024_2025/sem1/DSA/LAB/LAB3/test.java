public class test {
    public static void main(String args[]) {
        int n = 129432;
        int count = 0;
        while(n > 10) {
            count++;
            n /= 10;
        }

        System.out.println(count);
    }
    
}
