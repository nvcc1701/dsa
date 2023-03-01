/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai8;

/**
 *
 * @author nvcc
 */
public class Bai8 {

    public static void main(String[] args) {
        Comunicate c = new Comunicate();
        Clock cc = new Clock(c);
        Dog d = new Dog(c);
        Person p = new Person(c);

        cc.start();
        d.start();
        p.start();
    }
}
