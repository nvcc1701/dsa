/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newpackage.bai1;

/**
 *
 * @author nvcc
 */
public class ChamBai extends Thread {

    private Data d;

    public ChamBai(Data d) {
        this.d = d;
    }

    public void run() {
        try {
            synchronized (d) {
                while (!d.isLambaixong()) {
                    d.wait();
                }

                for (int i = 1; i <= 4; i++) {
                    System.out.println("Co cham bai" + i);
                    sleep(1000);
                }
                System.out.println("DONEEE");
            }
        } catch (Exception e) {
        }
    }
}
