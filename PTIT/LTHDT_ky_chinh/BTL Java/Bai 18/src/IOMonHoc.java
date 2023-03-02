import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

public class IOMonHoc {
    private String url = "data/mh.inp";
    private String urlCredit = "data/sx.out";
    private String urlGr = "data/nhom.out";

    public ArrayList<MonHoc> read() {
        ArrayList<MonHoc> list = new ArrayList<>();
        try(Scanner sc = new Scanner(new File(url))) {
            while(sc.hasNextLine()) {
                String m_s, t, nhom, so_s;
                m_s = sc.nextLine();
                t = sc.nextLine();
                nhom = sc.nextLine();
                so_s = sc.nextLine();

                try {
                    int m, so;
                    m = Integer.parseInt(m_s);
                    so = Integer.parseInt(so_s);
                    if(so >= 0 && so <= 7 && m >= 1000 && m <= 9999) {
                        MonHoc mh = new MonHoc(m, t, nhom, so);
                        list.add(mh);
                    }
                } catch (Exception ex) {
                    System.out.println(ex.toString());
                }
            }
        } catch (Exception ex) {
            System.out.println(ex.toString());
        }

        return list;
    }

    public void write(ArrayList<MonHoc> list, int x) {
        String url;
        if(x == 1) url = new String(urlCredit);
        else url = new String(urlGr);

        try(PrintWriter pw = new PrintWriter(url)) {
            for(MonHoc mh: list) {
                pw.println(mh.toString());
            }
        } catch (Exception ex) {
            System.out.println(ex.toString());
        }
    }
}
