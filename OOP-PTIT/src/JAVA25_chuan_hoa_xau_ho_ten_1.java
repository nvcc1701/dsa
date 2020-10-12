import java.util.*;

public class JAVA25_chuan_hoa_xau_ho_ten_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t>0) {
            String s = sc.nextLine();
            s = s.trim();
            s = s.toLowerCase();

            StringTokenizer st = new StringTokenizer(s);
            ArrayList<String> arrayList = new ArrayList<String>();
            while(st.hasMoreTokens()) arrayList.add(st.nextToken());
            Iterator<String> iterator = arrayList.iterator();

            while(iterator.hasNext()) iterator.next()

            t--;
        }
    }
}
