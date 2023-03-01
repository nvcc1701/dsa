
import java.io.PrintWriter;

class Main {

    public static void main(String[] args) {
        // FileReader -> đọc từng ký tự -> trả về dạng byte

        String filename = "FileReader.txt";
        String fileout = "src/Main/FileWriter.txt";

        // FileReader r;
        // try {
        // r = new FileReader(filename);
        // int k;
        // while (true) {
        // k = r.read();
        // if (k == -1)
        // break;
        // char c = (char) k;
        // System.out.print(c);
        // }
        // r.close();
        // } catch (Exception e) {
        // e.printStackTrace();
        // }
        
        // BuferReader -> dọc cả 1 dòng
        // try {
        //     BufferedReader br = new BufferedReader(new FileReader(filename));
        //     String line = null;
        //     while ((line = br.readLine()) != null) {
        //         System.out.println(line);
        //     }
        //     br.close();
        // } catch (Exception e) {
        //     // TODO: handle exception
        // }
        
        
        //Ghi file
        try {
            PrintWriter p = new PrintWriter(fileout);
            p.print("Tong + 12345");
            p.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
