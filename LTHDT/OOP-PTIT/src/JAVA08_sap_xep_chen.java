import java.util.Scanner;

public class JAVA08_sap_xep_chen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();

        System.out.println("Buoc 0: " + a[0]);
        for(int i = 1; i < n; i++) {
            int key = a[i];
            int j = i-1;
            while(j >= 0 && a[j] > key) {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = key;

            System.out.print("Buoc " + i + ": ");
            for (j = 0; j <= i; j++) System.out.print(a[j] + " ");
            System.out.println();
        }
    }
}
