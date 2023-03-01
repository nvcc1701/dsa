
import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringTokenizer;

public class ChuanHoaHoTen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<String> res = new ArrayList<>();


        while (t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            String s = sc.nextLine();
            StringTokenizer st = new StringTokenizer(s.toLowerCase());
            StringBuilder sb = new StringBuilder();
            ArrayList<String> lst = new ArrayList<>();

            if (s.isEmpty()) {
                System.out.println("");
                continue;
            }

            if (n == 1) {
                while (st.hasMoreTokens())
                    lst.add(st.nextToken());

                String first = lst.get(lst.size() - 1);
                sb.append(Character.toUpperCase(first.charAt(0)));
                for (int i = 1; i < first.length(); i++) {
                    sb.append(first.charAt(i));
                }

                sb.append(" ");
                lst.remove(lst.size() - 1);

                for (int i = 0; i < lst.size(); i++) {
                    String ss = lst.get(i);
                    for (int j = 0; j < ss.length(); j++) {
                        if (j == 0) {
                            sb.append(Character.toUpperCase(ss.charAt(j)));
                        } else {
                            sb.append(ss.charAt(j));
                        }
                    }

                    if (i != lst.size() - 1) {
                        sb.append(" ");
                    }
                }
                res.add(sb.toString());
            } else {
                while (st.hasMoreTokens())
                    lst.add(st.nextToken());

                String first = lst.get(0);
                lst.remove(0);

                for (int i = 0; i < lst.size(); i++) {
                    String ss = lst.get(i);
                    for (int j = 0; j < ss.length(); j++) {
                        if (j == 0) {
                            sb.append(Character.toUpperCase(ss.charAt(j)));
                        } else {
                            sb.append(ss.charAt(j));
                        }
                    }

                    sb.append(" ");
                }

                sb.append(Character.toUpperCase(first.charAt(0)));
                for (int i = 1; i < first.length(); i++) {
                    sb.append(first.charAt(i));
                }

                res.add(sb.toString());
            }
        }
    
        for(String x: res) {
            System.out.println(x);
        }
    }
}
