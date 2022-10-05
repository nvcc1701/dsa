/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J05011_TinhGio;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

/**
 *
 * @author nhokt
 */
public class GameThu {

    private String maNguoiChoi, ten;
    private Date giovao, giora;
    private long choi;

    public long getChoi() {
        return choi;
    }

    public void setChoi(long choi) {
        this.choi = choi;
    }

    public GameThu(String maNguoiChoi, String ten, String giovao, String giora)
            throws ParseException {
        this.maNguoiChoi = maNguoiChoi;
        this.ten = ten;
        this.giovao = new SimpleDateFormat("hh:mm").parse(giovao);
        this.giora = new SimpleDateFormat("hh:mm").parse(giora);
        if (this.giora.after(this.giovao)) {
            this.choi = this.giora.getTime() - this.giovao.getTime();
        } else {
            this.choi = this.giovao.getTime() - this.giora.getTime() + 24 * 1000 * 60 * 60;
        }
    }

    @Override
    public String toString() {
        long mm = (choi / 1000 / 60) % 60;
        long hh = (choi / 1000 / 60 - mm) / 60;

        return maNguoiChoi + " " + ten + " " + hh + " gio "
                + mm + " phut";
    }

    public int compareTo(GameThu o) {
        return Long.compare(o.choi, choi);
    }

}
