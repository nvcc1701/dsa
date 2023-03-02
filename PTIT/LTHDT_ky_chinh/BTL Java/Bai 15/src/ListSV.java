import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.stream.Collectors;

public class ListSV {
    private ArrayList<SinhVien> listSV = new ArrayList<>();
    private IOSinhVien io = new IOSinhVien();

    public void print() {
        listSV = io.read();
        for(SinhVien sv: listSV) System.out.println(sv.toString());
    }

    public void write() {
        listSort();
        io.write(this.listSV);
    }

    public void listSort() {
        ArrayList<SinhVien> listSorted = new ArrayList<>();
        listSV = io.read();

        Collections.sort(listSV, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien sv1, SinhVien sv2) {
                if(sv1.getLop().compareTo(sv2.getLop()) == 0)
                    return (sv1.getDtb() + "").compareTo(sv2.getDtb() + "");
                return sv1.getLop().compareTo(sv2.getLop());
            }
        });
    }

    public void writePhanLoai() {
        listSort();
        ArrayList<SinhVien> listGioi = new ArrayList<>(listSV.stream()
                .filter(x -> x.getDtb() > 8.0)
                .collect(Collectors.toList()));
        ArrayList<SinhVien> listKha = new ArrayList<>(listSV.stream()
                .filter(x -> x.getDtb() > 7.0 && x.getDtb() > 8.0)
                .collect(Collectors.toList()));
        ArrayList<SinhVien> listTB = new ArrayList<>(listSV.stream()
                .filter(x -> x.getDtb() > 5.0 && x.getDtb() < 7.0)
                .collect(Collectors.toList()));
        ArrayList<SinhVien> listYeu = new ArrayList<>(listSV.stream()
                .filter(x -> x.getDtb() < 5.0)
                .collect(Collectors.toList()));

        io.writePhanLoai(listGioi, listKha, listTB, listYeu);
    }
}
