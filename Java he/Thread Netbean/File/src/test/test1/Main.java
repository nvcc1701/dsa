/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test.test1;

/**
 *
 * @author nvcc
 */
public class Main {

    public static void main(String[] args) {
        Comunicate c = new Comunicate();

        CucCu cc = new CucCu(c);
        Dog d = new Dog(c);
        
        cc.start();
        d.start();
    }
}
