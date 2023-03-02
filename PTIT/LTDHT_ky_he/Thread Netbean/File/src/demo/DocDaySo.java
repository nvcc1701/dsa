package demo;
import java.io.BufferedReader;
import java.io.FileReader;

public class DocDaySo {

    public static void main(String[] args) {

        String filename = "DocDaySo.txt";

        try {
            BufferedReader br = new BufferedReader(new FileReader(filename));
            String line = null;
            while ((line = br.readLine()) != null) {
                String[] s = line.split("\\s+");
                int t = 0;

                for (String i : s) {
                    t += Integer.parseInt(i);
                }

                System.out.println(t);
            }
            br.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
