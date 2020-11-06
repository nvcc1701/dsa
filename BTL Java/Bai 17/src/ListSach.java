import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class ListSach {
    private ArrayList<Sach> listSach;
    private IOSach io = new IOSach();

    public void print() {
        listSach = io.read();
        for(Sach s: listSach) {
            System.out.println(s.toString());
        }
    }

    public void writeSort() {
        listSach = io.read();

        Collections.sort(listSach, new Comparator<Sach>() {
            @Override
            public int compare(Sach s1, Sach s2) {
                return s1.getPrice() > s2.getPrice() ? 1 : -1;
            }
        });

        io.write(listSach,1);
    }

    public void writePL() {
        Collections.sort(listSach, new Comparator<Sach>() {
            @Override
            public int compare(Sach s1, Sach s2) {
                return s1.getName().compareTo(s2.getName());
            }
        });

        Collections.sort(listSach, new Comparator<Sach>() {
            @Override
            public int compare(Sach s1, Sach s2) {
                return s1.getGroup().compareTo(s2.getGroup());
            }
        });
        io.write(listSach, 2);
    }
}
