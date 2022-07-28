/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newpackage.bai1;

/**
 *
 * @author nvcc
 */
public class GiaoBai extends Thread {
    
    public void run() {
        
        try {
            for (int i = 1; i <= 4; i++) {
                System.out.println("Co VA giao bai " + i);
                sleep(1000);
            }
        } catch (Exception e) {
        }
        
    }
}
