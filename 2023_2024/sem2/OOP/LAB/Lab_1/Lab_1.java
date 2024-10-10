import java.util.Scanner;

class Exercise1 
{
    public static void main(String[] args) 
    {

   		System.out.println("Author: Nguyen Quang Huy");
        System.out.println("Date of birth: 4/8/2005");
        System.out.println("Student ID: 523H0140");

        Scanner sc = new Scanner(System.in);

        // System.out.print("Enter Name: ");
        // String name  = sc.nextLine();

        // System.out.print("Enter date of birth: ");
        // int birth = sc.nextInt();

        // System.out.print("Enter Student's ID: ");
        // int ID = sc.nextInt();

        // System.out.println("Name : " + name);
        // System.out.println("Date of birth : " + birth);
        // System.out.println("ID : " + ID);

    }
}

class Exercise2 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter height: ");
        double height = sc.nextDouble();

        System.out.print("Enter base: ");
        double base = sc.nextDouble();

        double area = 0.5 * height * base;
        System.out.println("Area = " + area);
    }
}

class Exercise3 
{
    public static int Remainder_Of_Division(int a, int b) 
    {
        return a % b;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter diviend: ");
        int num_divided= sc.nextInt();

        System.out.print("Enter divisor: ");
        int divisor = sc.nextInt();

        System.out.println(Remainder_Of_Division(num_divided, divisor));

    }
}

class Exercise4
{
	public static double Fahre_To_Celsi(double fahre) 
	{
        return (fahre - 32) / (1.8);
    }

    public static double Celsi_To_Fahre(double celsi) 
    {
        return (celsi * 1.8) + 32;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nEnter the temperature in Fahrenheit: ");
        double fahre = sc.nextDouble();
        System.out.printf(fahre + " F = " + Fahre_To_Celsi(fahre) + " C");

        System.out.print("\nEnter the temperature in Celcius: ");
        double celsi = sc.nextDouble();
        System.out.println(celsi + " C = " + Celsi_To_Fahre(celsi) + " C");

    }
}

class Exercise5
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter year: ");
        int year = sc.nextInt();
        
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            System.out.print(year + " is a leap year");
        else
            System.out.print(year + " is not a leap year");
    }
}

class Exercise6
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Number 1: ");
        double num_1 = sc.nextDouble();
        System.out.print("Enter Number 2: ");
        double num_2 = sc.nextDouble();
        System.out.print("Enter Number 3: ");
        double num_3 = sc.nextDouble();

        double max = num_1;
        if(num_2 > num_3 && num_2 > max)
        	max = num_2;
        else if(num_3 > num_2 && num_3 > max)
        	max = num_3;

        System.out.println("The maximum number = " +  max);
    }	
}

class Exercise7
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Character: ");
		char c = sc.next().charAt(0);

        if((c >= 48 && c <= 57) || ((c >= 65 && c <=90) || (c >= 97 && c <= 122)))
			System.out.println(c + " Is an alphanumeric");
		else 
			System.out.println(c + " Is not an alphanumeric");
    }
}

class Exercise8
{
    public static int _8a(int n) 
    {
        int sum = 0;
        for(int i = 1; i <= n; i++) 
            sum += i;
        return sum;
    }
    public static int _8b(int n) 
    {
        int prod = 1;
        for(int i = 1; i <= n; i++) 
            prod += i;
        return prod;
    }
    public static int _8c(int n)
    {
        int sum = 1;
        for(int i = 1; i <=n; i++)
            sum += Math.pow(2, i);
        return sum;
    }
    public static int _8d(int n)
    {
        int sum = 1;
        for(int i = 1; i <=n; i++)
            sum += (1 / (2*i));
        return sum;
    }
    public static int _8e(int n)
    {
        int sum = 0;
        for(int i = 1; i <=n ; i++)
            sum += Math.pow(i, 2);
        return sum;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter n: ");
        int n = sc.nextInt();

        System.out.println("8a) " + _8a(n));
        System.out.println("8b) " + _8b(n));
        System.out.println("8c) " + _8c(n));
        System.out.println("8d) " + _8d(n));
        System.out.println("8e) " + _8e(n));
    }
}

class Exercise9
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        // System.out.print("Enter number of test case: ");
        // int test_case = sc.nextInt();

        // while(test_case--)
        // {
        //     System.out.print("Enter N: ");
        //     int n = sc.nextInt();   

        //     if(n %2 == 0)
        //         System.out.printf("%d is even, so we take n/2: %d", n, n/2);
        // }
        System.out.print("Enter N: ");
        int n = sc.nextInt();   

        // if(n %2 == 0)
        // {
        //     while(n != 1 && n%2 == 0)
        //     {
        //         System.out.printf("%d is even, so we take n/2: %d\n", n, n/2);
        //         n /= 2;
        //     }
        //     while(n != 1 && n %2 != 0)
        //     {
        //         System.out.printf("%d is odd, so we take n*3 + 1: %d\n", n, n*3 + 1); 
        //         n = n*3 + 1; 
        //     }
        // }
        // else if(n %2 != 0)
        // {
        //     while(n != 1 && n %2 != 0)
        //     {
        //         System.out.printf("%d is odd, so we take n*3 + 1: %d\n", n, n*3 + 1); 
        //         n = n*3 + 1; 
        //     }
        //     while(n != 1 && n %2 == 0)
        //     {
        //         System.out.printf("%d is even, so we take n/2: %d\n", n, n /= 2); 
        //         n /= 2; 
        //     }

        // }

        while(n > 1)
        {
            if(n %2 == 0)
            {
                System.out.printf("%d is even, so we take n/2: %d\n", n, n/2);
                n /= 2;
            }
            else
            {
                System.out.printf("%d is odd, so we take n*3 + 1: %d\n", n, n*3 + 1); 
                n = n*3 + 1;                
            }
        }
    }
}

class Exercise10
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter n: ");
        int n = sc.nextInt();

        int ori_num = n;
        int first_dig = 0;
        System.out.printf("The last digit of %d is %d\n", ori_num, n%10);

        while(n >= 10)
        {
            n /= 10;
            first_dig = n;
        }
        System.out.printf("The first digit of %d is %d\n", ori_num, first_dig);
    }
}

class Exercise11
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter n: ");
        int ori_num = sc.nextInt();

        int n = ori_num;
        int res = 0;
        while(n > 0)
        {
            n /= 10;
            res++;
        }
        System.out.printf("Number %d has %d digits", ori_num, res);
    }
}

class Exercsie14
{
    public static void main(String[] args) 
    {
            System.out.println("----Menu----");   
            System.out.println("1. Coca     6000");
            System.out.println("2. Pepsi    6000");
            System.out.println("3. Sprite   5000");
            System.out.println("4. Snack    4000");
            System.out.println("5. Shutdown Machine");
            System.out.println("Please enter the number: ");

            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            double money_inp;

            if(n <= 5)
            {
                switch(n)
                        {
                            case 1: 
                                System.out.println("The price of Coca is 2$, please enter the amount of money: ");
                                money_inp = sc.nextDouble();
                                if(money_inp < 6000)
                                    System.out.println("No enough money to by this item. PLease select again");
                                else if(money_inp == 6000)
                                    System.out.println("Enough money. Enjoy your drinks");
                                else if(money_inp > 6000)
                                    System.out.printf("Here your changes: %d. Enjoy your drinks", money_inp - 6000);
                        }
            }
    }
}
