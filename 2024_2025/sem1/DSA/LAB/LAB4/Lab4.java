class Lab4
{
    //Select
    static int[] selection1(int[] a)
    {
        int m, t;
        for(int i = 0; i < a.length-1; ++i)
        {
            m = i;
            for(int j = i + 1; j < a.length; ++j)
            if(a[m] > a[j])
                m = j;
            //swap
            t = a[i];
            a[i] = a[m];
            a[m] = t;
        }
        return a;
    }
    static void output(int[] a)
    {
        for(int i = 0; i < a.length; ++i)
        System.out.print(a[i] + "\t");
        System.out.println();
    }
    public static void main(String[] arg)
    {
        int[] a = {8, 10, 1, 6, 5};
        output(a);
        a = selection1(a);
        output(a);
    }
}