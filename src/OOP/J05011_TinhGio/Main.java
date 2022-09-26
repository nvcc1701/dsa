/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J05011_TinhGio;

import java.text.*;
import java.util.*;

/**
 *
 * @author nhokt
 */
public class Main {

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<GameThu> list = new ArrayList<GameThu>();
        while (n-- > 0) {
            GameThu gt = new GameThu(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            list.add(gt);
        }
        Collections.sort(list, (o1, o2) -> {
            return o1.compareTo(o2);
        });
        for (GameThu gt : list) {
            System.out.println(gt);
        }
    }
}
/*
3

01T

Nguyen Van An

09:00

10:30

06T

Hoang Van Nam

15:30

18:00

02I

Tran Hoa Binh

09:05

10:00
 */
