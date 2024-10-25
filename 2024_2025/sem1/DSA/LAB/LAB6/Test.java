class Test {
    public static void main(String[] arg) {
        // Exercise 1
        String s = "20 10 30 15 5 25 40 50";
        String[] t = s.split(" ");
        BST b = new BST();
        b.root = new Node(Integer.parseInt(t[0]));
        int a;
        for(int i = 1; i<t.length; ++i) {
            a = Integer.parseInt(t[i]);
            b.insert(b.root, a);
        }
       
        // Exercise 2
        System.out.print("Exercise 2(NLR): ");
        b.NLR(b.root);
        System.out.println();

        // Exercise 3
        System.out.print("Exercise 3(RNL): ");
        b.RNL(b.root);
        System.out.println();
 
        // Exercise 4
        System.out.print("Exercise 4: ");
        Integer key = 10;
        System.out.println("Key = " + key + (b.containsKey(key) ? " FOUND" : " NOT FOUND"));
        
        // Exercise 5
        System.out.print("Exercise 5(After deleteMax): ");
        b.deleteMax();
        b.RNL(b.root);
        System.out.println();

        // Exercise 6
        System.out.print("Exercise 6(After delete_use_pre) key = " + key + ": ");
        b.delete_use_pre(key);
        b.RNL(b.root);
        System.out.println();

        // Exercise 7
        System.out.println("Exercise 7(Height): " + b.height(b.root));

        // Exercise 8
        System.out.println("Exercise 8(SUM): " + b.sum(b.root));

        // Exercise 9
        System.out.println("Exercise 9(SUMeven): " + b.sumEven(b.root));
    
        // Excerise 10
        System.out.println("Exercise 10(countLeaves): " + b.countLeaves(b.root));
    }
}