/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai10;

import bai9.Communicate;

/**
 *
 * @author nvcc
 */
public class Main {

    public static void main(String[] args) {
        Comunicate c = new Comunicate();
        Sinh s = new Sinh(c);
        BinhPhuong b = new BinhPhuong(c);
        Chia4 c4 = new Chia4(c);

        s.start();
        b.start();
        c4.start();
    }
}
