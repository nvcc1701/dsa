import java.util.Arrays;
import java.util.Scanner;

public class TN03_TinhTOngCacChuSo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            char s[] = sc.next().toCharArray();
            Arrays.sort(s);

            int sum = 0;
            for (int i = 0; i < s.length; i++) {
                if (Character.isDigit(s[i])) {
                    sum += s[i] - '0';
                } else {
                    System.out.print(s[i]);
                }
            }
            System.out.print(sum);
            System.out.println();
        }
    }
}
