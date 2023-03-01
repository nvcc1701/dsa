/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test.test1;

/**
 *
 * @author nvcc
 */
public class Dog extends Thread {

    private Comunicate c;

    public Dog(Comunicate c) {
        this.c = c;
    }

    public void run() {

        try {
            while (true) {
                if (c.isStop()) {
                    System.out.println("Wow woww");
                    break;
                }

                System.out.println("Gau gau");
                Thread.sleep(1000);
            }
        } catch (Exception e) {
        }
    }
}
