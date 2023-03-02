import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class ListMH {
    private ArrayList<MonHoc> listMH = new ArrayList<>();
    private IOMonHoc io = new IOMonHoc();

    public void print() {
        listMH = io.read();
        for(MonHoc mh: listMH) {
            System.out.println(mh.toString());
        }
    }

    public void writeCredit() {
        listMH = io.read();
        Collections.sort(listMH, new Comparator<MonHoc>() {
            @Override
            public int compare(MonHoc monHoc, MonHoc t1) {
                return monHoc.getCredit() > t1.getCredit() ? 1 : -1;
            }
        });

        io.write(listMH, 1);
    }

    public void writeGroup() {
        listMH = io.read();
        Collections.sort(listMH, new Comparator<MonHoc>() {
            @Override
            public int compare(MonHoc monHoc, MonHoc t1) {
                return monHoc.getName().compareTo(t1.getName());
            }
        });

        Collections.sort(listMH, new Comparator<MonHoc>() {
            @Override
            public int compare(MonHoc monHoc, MonHoc t1) {
                return monHoc.getGroup().compareTo(t1.getGroup());
            }
        });

        io.write(listMH, 2);
    }
}
