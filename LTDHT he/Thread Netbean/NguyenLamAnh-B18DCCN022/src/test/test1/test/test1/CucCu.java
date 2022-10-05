/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test.test1;

/**
 *
 * @author nvcc
 */
public class CucCu extends Thread {

    private Comunicate c;

    public CucCu(Comunicate c) {
        this.c = c;
    }

    public void run() {
        int count = 1;
        try {
            while (true) {
                if (count % 11 == 0) {
                    c.setStop(true);
                    break;
                }

                System.out.println("cuc cu");
                Thread.sleep(1000);
                count += 1;
            }
        } catch (Exception e) {
        }
    }

}
