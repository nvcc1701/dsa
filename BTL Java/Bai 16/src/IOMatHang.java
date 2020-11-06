import java.io.File;
import java.io.PrintWriter;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class IOMatHang {
    private String url = "data/mh.inp";
    private String urlOut = "data/sx.out";

    public ArrayList<MatHang> read() {
        ArrayList<MatHang> ListMH = new ArrayList<>();

        try (Scanner sc = new Scanner(new File(url))) {
            while(sc.hasNextLine()) {
                String m_s, t, nhom, gia_s;
                m_s = sc.nextLine();
                t = sc.nextLine();
                nhom = sc.nextLine();
                gia_s = sc.nextLine();

                try {
                    int m = Integer.parseInt(m_s);
                    double gia = Double.parseDouble(gia_s);
                    MatHang mh = new MatHang(m, t, nhom, gia);
                    ListMH.add(mh);
                } catch (Exception ex) {
//                    System.out.println(ex.toString());
                }

            }
        } catch (Exception ex) {
//            System.out.println(ex.toString());
        }
        return ListMH;
    }

    public void write(ArrayList<MatHang> list) {
        try (PrintWriter pw = new PrintWriter(urlOut)) {
            for(MatHang mh: list) pw.print(mh.toString());
        } catch (Exception ex) {
            System.out.println(ex.toString());
        }
    }
}
