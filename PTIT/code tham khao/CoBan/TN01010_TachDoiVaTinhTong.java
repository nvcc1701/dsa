package CoBan;
//Cho một số nguyên dương không quá 200 chữ số. Mỗi bước tách số nguyên thành hai nửa: nửa đầu là n/2 chữ số đầu tiên, nửa sau là phần còn lại (trong đó n là số chữ số của số ban đầu, nếu n lẻ thì phép chia 2 sẽ tính phần nguyên). Sau đó thực hiện tính tổng của hai nửa này.
//Lặp lại các bước trên cho đến khi kết quả chỉ còn là số có 1 chữ số.

import java.math.*;
import java.util.*;

//Hãy thực hiện tính toán và in kết quả của từng bước.
//Input
//Chỉ có một số nguyên dương không quá 200 chữ số.
//123456
//Output
//Ghi ra kết quả từng bước, mỗi bước trên một dòng. Dừng lại khi kết quả chỉ còn 1 chữ số.
//579
//84
//12
//3
public class TN01010_TachDoiVaTinhTong {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int n = s.length();
        while (n >= -1) {
            s = xuLy(s);
            System.out.println(s);
        }
    }

    public static String xuLy(String s) {
        int n = s.length();
        BigInteger a = new BigInteger(s.substring(0, n / 2));
        BigInteger b = new BigInteger(s.substring(n / 2));
        return a.add(b).toString();
    }
}
