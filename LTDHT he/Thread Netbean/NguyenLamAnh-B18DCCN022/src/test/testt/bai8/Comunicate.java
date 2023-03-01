/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai8;

/**
 *
 * @author nvcc
 */
public class Comunicate {

    public boolean bark;
    public boolean stop;

    public Comunicate() {
        bark = false;
        stop = false;
    }

    public boolean isBark() {
        return bark;
    }

    public void setBark(boolean bark) {
        this.bark = bark;
    }

    public boolean isStop() {
        return stop;
    }

    public void setStop(boolean stop) {
        this.stop = stop;
    }

}
