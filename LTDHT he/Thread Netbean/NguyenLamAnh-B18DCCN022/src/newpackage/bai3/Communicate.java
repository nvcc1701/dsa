/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newpackage.bai3;

/**
 *
 * @author nvcc
 */
public class Communicate {

    private String[] pheptinh;
    private int index;
    private boolean closeAll;

    public Communicate() {
        this.index = 1;
        closeAll = false;
    }

    public String[] getPheptinh() {
        return pheptinh;
    }

    public void setPheptinh(String[] pheptinh) {
        this.pheptinh = pheptinh;
    }

    public int getIndex() {
        return index;
    }

    public void setIndex(int index) {
        this.index = index;
    }

    public boolean isCloseAll() {
        return closeAll;
    }

    public void setCloseAll(boolean closeAll) {
        this.closeAll = closeAll;
    }

}
