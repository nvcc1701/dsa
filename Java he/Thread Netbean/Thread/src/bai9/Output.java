/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai9;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author nvcc
 */
public class Output extends Thread {

    private Communicate c;

    public Output(Communicate c) {
        this.c = c;
    }

    public Output() {
    }

    @Override
    public void run() {
        while (true) {
            try {
                synchronized (c) {
                    c.wait();

                    if (c.getNum1() == 0 || c.getNum2() == 0) {
                        c.setCheck(true);
                        c.notify();
                        break;
                    }

                    int sum = c.getNum1() + c.getNum2();
                    System.out.println("Addition result: " + sum);
                    c.notify();
                }
            } catch (Exception e) {
                System.out.println(e.toString());
            }
        }
    }
}
