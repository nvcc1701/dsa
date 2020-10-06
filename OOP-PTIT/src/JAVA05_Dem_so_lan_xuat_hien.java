import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;

public class JAVA05_Dem_so_lan_xuat_hien {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0) {
            int n = sc.nextInt();
            HashMap<Integer, Integer> map = new HashMap<>();
            int a;
            for(int i = 0; i < n; i++) {
                a = sc.nextInt();
                if(!map.containsKey(a)) map.put(a, 1);
                else {
                    map.replace(a, map.get(a)+1);
                }
            }

            Set set = map.keySet();
            for(Object key: set) {
                System.out.println(key + " " + map.get(key));
            }
            t--;
        }
    }
}
