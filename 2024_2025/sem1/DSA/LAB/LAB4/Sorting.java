import java.util.Arrays;

class Sorting {
    public static void selectionSort(int[] arr) {
        for (int i = arr.length - 1; i > 0; i--) {
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

    public static void bubbleSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            boolean isSorted = true;
            for (int j = 0; j < arr.length - 1 - i; j++) {
                if (arr[j + 1] < arr[j]) {
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                    isSorted = false;
                }
            }
            if (isSorted) {
                return;
            }
        }
    }

    public static void insertionSort(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    private static void merge(int arr[], int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;

        int L[] = new int[n1];
        int R[] = new int[n2];

        for (int i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];

        int i = 0, j = 0;

        int k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    public static void mergeSort(int[] arr, int first, int last) {
        if (first < last) {
            int middle = (first + last) / 2;
            mergeSort(arr, first, middle);
            mergeSort(arr, middle + 1, last);
            merge(arr, first, middle, last);
        }
    }

    public static void mergeSort(int[] arr) {
        mergeSort(arr, 0, arr.length - 1);
    }

    private static int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        return i + 1;
    }

    public static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            // pi is partitioning index , arr[pi] is now at right place
            int pi = partition(arr, low, high);
            // Recursively sort elements before partition and after partition
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    public static void quickSort(int[] arr) {
        quickSort(arr, 0, arr.length - 1);
    }

    public static void main(String[] args) {
        System.out.println("Selection Sort");
        int[] a = { 8, 2, 0, 1, 9 };
        System.out.println(Arrays.toString(a));
        selectionSort(a);
        System.out.println(Arrays.toString(a));

        System.out.println();

        System.out.println("Bubble Sort");
        int[] b = { 8, 2, 0, 1, 9 };
        System.out.println(Arrays.toString(b));
        bubbleSort(b);
        System.out.println(Arrays.toString(b));

        System.out.println();

        System.out.println("Insertion Sort");
        int[] c = { 8, 2, 0, 1, 9 };
        System.out.println(Arrays.toString(c));
        insertionSort(c);
        System.out.println(Arrays.toString(c));

        System.out.println();

        System.out.println("Merge Sort");
        int[] d = { 8, 2, 0, 1, 9 };
        System.out.println(Arrays.toString(d));
        mergeSort(d);
        System.out.println(Arrays.toString(d));

        System.out.println();

        System.out.println("Quick Sort");
        int[] e = { 8, 2, 0, 1, 9 };
        System.out.println(Arrays.toString(e));
        bubbleSort(e);
        System.out.println(Arrays.toString(e));
    }
}