class lab3 {
    // Ex 1
    public static int factorial(int n) {
        int res = 1;
        for(int i = 5; i > 0; i--) {
            res *= i;
        }
        return res;
    }

    public static boolean isPrime(int n) {
        for(int i = 2; i < Math.sqrt(n); i++) {
            if(n %i == 0)
                return false;
        }
        return true;
    }

    public static int computexpown(int x, int n) {
        int res = 1;
        for(int i = 1; i <= n; i++) {
            res *= x;
        }

        return res;
    }

    public static int countDigit(int n) {
        int count = 0;
        if (n == 0)
            return 1;

        while(n > 10) {
            ++count;
            n /= 10;
        }

        return count;
    }

    public static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }


    // Ex 2
    public static int recur_factorial(int n) {
        if(n == 1 || n == 0) 
            return 1;
        return n * recur_factorial(n - 1);
    }

    public static int recur_computexpown(int x, int n) {
        if(n == 1)
            return x;
        else if(n == 0)
            return 1;
        return x * recur_computexpown(x, n - 1);
    }

    public static int recur_countDigit(int n) {
        if(n < 10)
            return 1;
        return 1 + recur_countDigit(n/10);
    }

    public static boolean recur_isPrime(int n, int i) {
        if(n <= 2)
            return (n == 2) ? true : false;
        if(n %i == 0)
            return false;
        if(i * i > n)
            return true;
        
        return recur_isPrime(n , i + 1);
    }

    public static int recur_gcd(int a, int b) { 
        if (a == 0) 
            return b; 
        return recur_gcd(b % a, a); 
    }

    // Ex 3
    public static boolean isPrime3(int n, int d) {
        if(n <= 2)
            return (n == 2) ? true : false;
        if(n %d == 0)
            return false;
        if(d * d > n)
            return true;
        
        return isPrime3(n , d + 1);
    }

    // Ex 4
    public static int a(int n) {
        if(n == 1)
            return 3;
        return (2*n + 1) + a(n - 1);
    }

    public static int b(int n) {
        if(n == 1)
            return 1;
        return recur_factorial(n) + b(n - 1);
    }

    public static int c(int n) {
        if(n == 1)
        return 1;
    return recur_factorial(n) * c(n - 1);
    }

    public static int d(int n, int r) {
        if(n >= r && r > 0) {
            return (n - r + 1) * d(n, r - 1);
        }
        return 1;
    }

    public static double e(int n) {
        if (n == 1)
            return 3;
        return Math.pow(2, n) + n * n + e(n -1);
    }

    // Ex 6
    public static int minElement(int[] arr, int length) {
        int min = arr[0];
        for(int i = 1; i < length; i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }

    public static int sumOfArray(int[] arr, int length) {
        int sum = 0;
        for(int i = 0; i < length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    public static int evenCount(int[] arr, int length) {
        int count = 0;
        for(int i = 0; i < length; i++) {
            if(arr[i] %2 == 0)
                count++;
        }
        return count;
    }

    // Ex 7
    public static int recur_minElement(int[] arr, int length) {
        if(length == 1)
            return arr[0];
        return Math.min(arr[length - 1], recur_minElement(arr, length - 1));
    }

    public static int recur_sumOfArray(int[] arr, int length) {
        if(length == 1)
            return arr[0];
        return arr[length - 1] + recur_sumOfArray(arr, length - 1);
    }

    public static int recur_evenCount(int[] arr, int length) {
        if(length == 1) {
            if (arr[0] % 2 == 0) {
                return 1;
            }
            return 0;
        }

        if(arr[length - 1] % 2 == 0) {
            return 1 + recur_evenCount(arr, length - 1);
        } else {
            return 0 + recur_evenCount(arr, length - 1);
        }
    }

    public static void main(String[] args) {
        // System.out.println("Exercise 1.a " + factorial(10));
        // System.out.println("Exercise 1.b " + computexpown(2, 10));
        // System.out.println("Exercise 1.c " + countDigit(111));
        // System.out.println("Exercise 1.d " + isPrime(8));
        // System.out.println("Exercise 1.e " + gcd(8, 10) + "\n");

        // System.out.println("Exercise 2.a " + recur_factorial(10));
        // System.out.println("Exercise 2.b " + recur_computexpown(2, 10));
        // System.out.println("Exercise 2.c " + recur_countDigit(9898));
        // System.out.println("Exercise 2.d " + recur_isPrime(8, 2));
        // System.out.println("Exercise 2.e " + recur_gcd(8, 10));

        // System.out.println("Exercise 3:" + isPrime3(10, 2));

        // System.out.println("Exercise 4a: " + a(10));
        // System.out.println("Exercise 4b: " + a(10));
        // System.out.println("Exercise 4c: " + a(10, 2));
        System.out.println("Exercise 4d: " + d(7,3));
        // System.out.println("Exercise 4e: " + a(10));

        // int[] arr = {10, 32, 993, 231, 1};
        // System.out.println("Exercise 6a. Min = " + minElement(arr, arr.length));
        // System.out.println("Exercise 6b. Sum = " + sumOfArray(arr, arr.length));
        // System.out.println("Exercise 6c. evenCount = " + evenCount(arr, arr.length));



    }
    
}