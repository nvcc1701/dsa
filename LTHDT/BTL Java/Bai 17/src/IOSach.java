import java.io.File;
import java.io.PrintWriter;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;

public class IOSach {
    private String url = "data/sach.inp";
    private String urlOutPrice = "data/sx.out";
    private String urlOutGroup = "data/nhom.out";

    public ArrayList<Sach> read() {
        ArrayList<Sach> list = new ArrayList<>();
        try(Scanner sc = new Scanner(new File(url))) {
            while(sc.hasNextLine()) {
                String m_s, t, cn, gia_s;
                m_s = sc.nextLine();
                t = sc.nextLine();
                cn = sc.nextLine();
                gia_s = sc.nextLine();

                try {
                    int m; double gia;
                    m = Integer.parseInt(m_s);
                    gia = Double.parseDouble(gia_s);

                    if(m > 999 && m < 10000) {
                        Sach s = new Sach(m, t, cn, gia);
                        list.add(s);
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

    public void write(ArrayList<Sach> list, int x) {
        String url;
        if(x == 1) url = new String(urlOutPrice);
        else url = new String(urlOutGroup);
        try(PrintWriter pw = new PrintWriter(url)) {
            for(Sach s: list) {
                pw.println(s.toString());
            }
        } catch (Exception ex) {
            System.out.println(ex.toString());
        }
    }
}
