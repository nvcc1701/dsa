import java.util.Scanner;

public class TN09_HoanviKeTiep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int arr[];
        while (t-- > 0) {
            int n = sc.nextInt();
            arr = new int[n + 1];
            for (int i = 1; i <= n; i++)
                arr[i] = sc.nextInt();

            // 1 2 4 5 3
            // 1 2
            int i = n - 1;
            while (i > 0 && arr[i] > arr[i + 1]) {
                i--;
            }

            if (i <= 0) {
                for (i = 1; i <= n; i++) {
                    System.out.print(i + " ");
                }
                System.out.println();
            } else {
                for (int j = n - 1; j >= 0; j--) {
                    if (arr[j] > arr[i]) {
                        swap(arr, i, j);
                        break;
                    }
                }

                int k = n;
                for (int j = i + 1; j < k; j++) {
                    swap(arr, j, k);
                    k--;
                }

                for (int j = 1; j <= n; j++) {
                    System.out.print(arr[j] + " ");
                }
                System.out.println();
            }
        }
    }

    public static void swap(int arr[], int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
