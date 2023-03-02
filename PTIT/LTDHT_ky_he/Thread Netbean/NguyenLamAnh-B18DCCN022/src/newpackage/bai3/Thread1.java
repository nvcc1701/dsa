/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newpackage.bai3;

/**
 *
 * @author nvcc
 */
public class Thread1 extends Thread {

    private Communicate c;

    public Thread1(Communicate c) {
        this.c = c;
    }

    @Override
    public void run() {
        try {
            int time = 0;
            while (true) {
                System.out.println("Time: " + time);
                sleep(1000);
                time++;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
