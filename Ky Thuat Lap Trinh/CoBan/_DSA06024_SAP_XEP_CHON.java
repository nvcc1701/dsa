import java.util.Scanner;

public class _DSA06024_SAP_XEP_CHON {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int min;
        for (int i = 0; i < n - 1; i++) {
            min = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[min] > arr[j]) min = j;
            }
            swap(arr, min, i);

            System.out.print("Buoc " + (i + 1) + ": ");
            for (int m = 0; m < n; m++)
                System.out.print(arr[m] + " ");
            System.out.println();
        }
    }

    public static void swap(int[] a, int i, int j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
