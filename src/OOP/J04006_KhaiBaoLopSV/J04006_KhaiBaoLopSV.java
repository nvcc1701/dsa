/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J04006_KhaiBaoLopSV;

import java.text.ParseException;
import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class J04006_KhaiBaoLopSV {

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        SinhVien sinhVien = new SinhVien("", sc.nextLine(), sc.nextLine(), sc.nextLine(), Float.parseFloat(sc.nextLine()));
        System.out.println(sinhVien);
    }
}
