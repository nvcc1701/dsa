/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newpackage.bai3;

/**
 *
 * @author nvcc
 */
public class Main {

    public static void main(String[] args) {
        Communicate c = new Communicate();
        Thread1 t1 = new Thread1(c);
        Thread2 t2 = new Thread2(c);
        Thread3 t3 = new Thread3(c);

        t1.start();
        t2.start();
        t3.start();
    }
}
