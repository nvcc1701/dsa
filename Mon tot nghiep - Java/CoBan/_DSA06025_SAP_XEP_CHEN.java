import java.util.Scanner;

public class _DSA06025_SAP_XEP_CHEN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        System.out.println("Buoc 0: " + arr[0]);

        int key;
        for (int i = 1; i < n; i++) {
            key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;

            System.out.print("Buoc " + i + ": ");
            for (int m = 0; m <= i; m++)
                System.out.print(arr[m] + " ");
            System.out.println();
        }
    }
}