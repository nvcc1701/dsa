/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package example;

/**
 *
 * @author nhokt
 */
public class dequy {
    static int count=0;
    static void welcome(){
        count++;
        if (count<=5) {
            System.out.println(count);
            welcome();
        }
    }
    public static void main(String[] args) {
        welcome();
    }
}
