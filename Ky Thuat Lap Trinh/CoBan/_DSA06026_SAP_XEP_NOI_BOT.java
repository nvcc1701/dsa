import java.util.Scanner;

public class _DSA06026_SAP_XEP_NOI_BOT {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        boolean haveSwap;
        for (int i = 0; i < n - 1; i++) {
            haveSwap = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr, j, j + 1);
                    haveSwap = true;
                }
            }

            if (!haveSwap)
                break;

            System.out.print("Buoc " + (i + 1) + ": ");
            for (int m = 0; m < n; m++) {
                System.out.print(arr[m] + " ");
            }
            System.out.println();
        }
    }

    public static void swap(int[] a, int i, int j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
