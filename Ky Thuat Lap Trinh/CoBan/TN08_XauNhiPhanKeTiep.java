import java.util.Scanner;

public class TN08_XauNhiPhanKeTiep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s = sc.nextLine();

            for (int i = s.length() - 1; i >= 0; i--) {
                if (s.charAt(i) == '1') {
                    s = s.substring(0, i) + '0' + s.substring(i + 1);
                } else {
                    s = s.substring(0, i) + '1' + s.substring(i + 1);
                    break;
                }
            }

            System.out.println(s);
        }
    }
}