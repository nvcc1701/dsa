/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai9;

import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author nvcc
 */
public class Input extends Thread {

    private Communicate c;

    public Input(Communicate c) {
        this.c = c;
    }

    public Input() {
    }

    @Override
    public void run() {
        Scanner sc = new Scanner(System.in);
        while (true) {
            try {
                synchronized (c) {
                    
                    if(c.isCheck()) break;
                    
                    System.out.println("Enter number 1: ");
                    c.setNum1(sc.nextInt());
                    System.out.println("Enter number 2: ");
                    c.setNum2(sc.nextInt());
                    
                    c.notify();
                    c.wait();
                }
            } catch (Exception e) {
            }
        }
    }
}
