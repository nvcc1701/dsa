import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class ListMH {
    private ArrayList<MatHang> listMH = new ArrayList<>();
    private IOMatHang io = new IOMatHang();

    public void print() {
        listMH = io.read();
        for(MatHang mh: listMH) System.out.println(mh.toString());
    }

    public void write() {
        Collections.sort(listMH, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang mh1, MatHang mh2) {
                return (mh1.getGiaBan() > mh2.getGiaBan() ? -1 : 1);
            }
        });
        io.write(listMH);
    }
}
