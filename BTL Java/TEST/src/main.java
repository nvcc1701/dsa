import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        File url = new File("src/sv.inp");
        Scanner input = null;
        try {
            input = new Scanner(url);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }

        SinhVien sv[] = new SinhVien[10];
        int i = 0;
        while(input.hasNextLine()) {
            sv[i] = new SinhVien();
            if(input.hasNextInt()) {
                int msv = input.nextInt();
                if(input.hasNextLine()) {
                    String ten = input.nextLine();
                    if(input.hasNextLine()) {
                        String lop = input.nextLine();
                        if(input.hasNextFloat()) {
                            float diem = input.nextFloat();
                            sv[i] = new SinhVien(msv, ten, lop, diem);
                        } else {
                            sv[i].check = false;
                            break;
                        }
                    } else {
                        sv[i].check = false;
                        break;
                    }
                } else {
                    sv[i].check = false;
                    break;
                }
            } else {
                sv[i].check = false;
                break;
            }
            i++;
        }

        for(int j = 0; j <= i; j++) {
            if(sv[i].check == true) sv[i].show();
        }
    }
}
