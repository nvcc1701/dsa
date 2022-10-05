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
public class J02029_SXDoiChoTrucTiepLietKeNguoc {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int size = scanner.nextInt();
            int[] arrNumber = new int[size];
            ArrayList<String> arrStepNguoc = new ArrayList<>();

            for (int i = 0; i < size; i++) {
                arrNumber[i] = scanner.nextInt();
            }

            for (int i = 0; i < arrNumber.length - 1; i++) {
                String sNumber = "";
                for (int j = i + 1; j < arrNumber.length; j++) {
                    if (arrNumber[i] > arrNumber[j]) {
                        int temp = arrNumber[i];
                        arrNumber[i] = arrNumber[j];
                        arrNumber[j] = temp;
                    }
                }

                for (int j = 0; j < arrNumber.length; j++) {
                    sNumber += arrNumber[j] + " ";
                }

                arrStepNguoc.add(sNumber.trim());
            }

            for (int i = arrStepNguoc.size() - 1; i >= 0; i--) {
                System.out.println("Buoc " + (i + 1) + ": " + arrStepNguoc.get(i));
            }
        }
    }
}
/*
1
6
5 8 3 9 1 4

OUTPUT
Buoc 5: 1 3 4 5 8 9
Buoc 4: 1 3 4 5 9 8
Buoc 3: 1 3 4 9 8 5
Buoc 2: 1 3 8 9 5 4
Buoc 1: 1 8 5 9 3 4
 */
