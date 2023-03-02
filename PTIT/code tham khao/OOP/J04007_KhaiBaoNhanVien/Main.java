/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.KhaiBaoNhanVien_J04007;

import java.text.ParseException;
import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        NhanVien nhanVien=new NhanVien("00001", sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(),
                sc.nextLine(), sc.nextLine());
        System.out.println(nhanVien);
    }
}
