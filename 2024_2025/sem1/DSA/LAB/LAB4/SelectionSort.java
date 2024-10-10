import java.util.Arrays;

class SelectionSort {
    public static void selectionSortAscendingMax(int[] arr) {
        for (int i = arr.length - 1; i > 0; i--) {
            System.out.println(Arrays.toString(arr));
            int max_idx = i;
    
            for (int j = i - 1; j >= 0; j--) {
                if (arr[j] > arr[max_idx]) {
                    max_idx = j;
                }
            }
    
            int temp = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = temp;          
        }
    }

    public static void selectionSortDescendingMin(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.println(Arrays.toString(arr));
            int min_indx = i;
    
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[min_indx]) {
                    min_indx = j;
                }
            }
    
            int temp = arr[i];
            arr[i] = arr[min_indx];
            arr[min_indx] = temp;
        }
    }

    public static void selectionSortDescendingMax(int[] arr) { 
        for (int i = 0; i < arr.length; i++) { 
            System.out.println(Arrays.toString(arr)); 
            int max_idx = i;

            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] > arr[max_idx]) {
                    max_idx = j;
                }
            }
    
            int temp = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = temp;
            }
        }





    public static void main(String[] args) {
        System.out.println("Selection Sort");
        int[] a = { 8, 2, 0, 1, 9 };
        selectionSortAscendingMax(a);
        System.out.println();

        int[] b = { 8, 2, 0, 1, 9 };
        selectionSortDescendingMin(b);
        System.out.println();

        int[] c = { 8, 2, 0, 1, 9 };
        selectionSortDescendingMax(c);
        System.out.println();
    }
}

