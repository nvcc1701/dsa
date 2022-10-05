import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

public class IOSinhVien {
    private static String url = "data/sv.inp";
    private static String urlOut = "data/sv.out";
    private static String urlPhanloaiOut = "data/xeploai.out";

    public ArrayList<SinhVien> read() {
        ArrayList<SinhVien> svList = new ArrayList<>();

        try(Scanner sc = new Scanner(new File(url))) {
            while(sc.hasNextLine()) {
                String masv_S, ten, lop, dtb_S;
                masv_S = sc.nextLine();
                ten = sc.nextLine();
                lop = sc.nextLine();
                dtb_S = sc.nextLine();
                try {
                    int masv = Integer.parseInt(masv_S);
                    double dtb = Double.parseDouble(dtb_S);

                    SinhVien sv = new SinhVien(masv, ten, lop, dtb);
                    svList.add(sv);
                } catch (Exception ex) {
                    System.out.println(ex.toString());
                }
            }
        } catch (Exception ex) {
            System.out.println(ex.toString());
        }

        return svList;
    }

    public void write(ArrayList<SinhVien> listSV) {
        try (PrintWriter pw = new PrintWriter(urlOut)) {
            for(SinhVien sv: listSV) pw.println(sv.toStringOut());
        } catch (FileNotFoundException ex) {
            System.out.println(ex.toString());
        }
    }

    public void writePhanLoai(ArrayList<SinhVien> listGioi, ArrayList<SinhVien> listKha, ArrayList<SinhVien> listTB, ArrayList<SinhVien> listYeu) {
        try (PrintWriter pw = new PrintWriter(urlPhanloaiOut)) {
            pw.print("====hoc sinh gioi====\n");
            for(SinhVien sv: listGioi) pw.println(sv.toStringOut());
            pw.print("\n====hoc sinh kha====\n");
            for(SinhVien sv: listKha) pw.println(sv.toStringOut());
            pw.print("\n====hoc sinh trung binh====\n");
            for(SinhVien sv: listTB) pw.println(sv.toStringOut());
            pw.print("\n====hoc sinh yeu====\n");
            for(SinhVien sv: listYeu) pw.println(sv.toStringOut());
        } catch (Exception ex) {
            System.out.println(ex.toString());
        }
    }
}
