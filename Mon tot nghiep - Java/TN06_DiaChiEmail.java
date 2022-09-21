import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;
import java.util.StringTokenizer;

public class TN06_DiaChiEmail {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long t = Long.parseLong(sc.nextLine());
        ArrayList<String> res = new ArrayList<>();
        HashMap<String, Integer> map = new HashMap<>();

        while (t-- > 0) {
            String s = sc.nextLine();
            ArrayList<String> arr = new ArrayList<>();
            StringTokenizer st = new StringTokenizer(s);
            StringBuilder sb = new StringBuilder();

            while (st.hasMoreTokens()) {
                arr.add(st.nextToken().toLowerCase().toString());
            }

            sb.append(arr.get(arr.size() - 1));
            for (int i = 0; i < arr.size() - 1; i++) {
                sb.append(arr.get(i).charAt(0));
            }

            sb.append("@ptit.edu.vn");

            res.add(sb.toString());
        }

        for (String x : res) {
            if (!map.containsKey(x)) {
                map.put(x, 1);
                System.out.println(x);
            } else {
                int num = map.get(x) + 1;
                map.put(x, num);
                StringBuilder sb = new StringBuilder(x);
                int size = x.length() - "@ptit.edu.vn".length();
                sb.insert(size, num + "");
                System.out.println(sb.toString());
            }
        }
    }
}
