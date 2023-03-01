/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J04005_KhaiBaoLopThiSinh;

import java.text.ParseException;

import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class J04005_KhaiBaoLopThiSinh {

    public static void main(String[] args) throws ParseException {
        Scanner in = new Scanner(System.in);
        while (true) {
            ThiSinh thiSinh = new ThiSinh(in.nextLine(), in.nextLine(), Float.parseFloat(in.nextLine()), Float.parseFloat(in.nextLine()), Float.parseFloat(in.nextLine()));
            System.out.println(thiSinh.toString());
            break;
        }

    }

}
