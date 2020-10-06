import java.util.Scanner;

public class J04_Mang_doi_xung {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];

            for(int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                b[n-1-i] = a[i];
            }

            int ok = 1;
            for(int i = 0; i < n; i++) {
                if(a[i] != b[i]) ok = 0;
                break;
            }
            if(ok == 0) System.out.println("NO");
            else System.out.println("YES");

            t--;
        }
    }
}
