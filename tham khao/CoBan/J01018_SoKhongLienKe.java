/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class J01018_SoKhongLienKe {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            char[] arrNumber = scanner.nextBigInteger().toString().toCharArray();
            if (tongChuSo(arrNumber) == true && khoangCach(arrNumber) == true) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }

    public static boolean tongChuSo(char[] arrNumber) {
        int sum = 0;
        for (int i = 0; i < arrNumber.length; i++) {
            sum += arrNumber[i] - '0';
        }
        if (sum % 10 != 0) {
            return false;
        }
        return true;
    }

    public static boolean khoangCach(char[] arrNumber) {
        for (int i = 0; i < arrNumber.length - 1; i++) {
            if (Math.abs(arrNumber[i] - arrNumber[i + 1]) != 2) {
                return false;
            }
        }
        return true;
    }
}
/*
3
1353
NO
246864
YES
123435
NO
*/