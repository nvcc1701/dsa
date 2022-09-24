package CoBan;

import java.util.*;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author nhokt
 */
public class TN06_DiaChiEmail {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        long t = Long.valueOf(sc.nextLine());
        HashMap<String, Integer> map = new HashMap<>();
        ArrayList<String> arrayList = new ArrayList<>();
        while (t-- > 0) {
            String[] s = sc.nextLine().trim().toLowerCase().split("\\W+");
            String ho = "";
            for (int i = 0; i < s.length - 1; i++) {
                if (s[i].isEmpty() || s[i].equals("")) {
                    continue;
                } else {
                    ho += s[i].charAt(0);
                }
            }
            arrayList.add(s[s.length - 1] + ho);
            //            System.out.format("%s%s@ptit.edu.vn\n",s[s.length-1],ho);
        }
        for (int i = 0; i < arrayList.size(); i++) {
            if (map.containsKey(arrayList.get(i))) {
                map.put(arrayList.get(i), (Integer) map.get(arrayList.get(i)) + 1);
                System.out.format("%s%d@ptit.edu.vn\n", arrayList.get(i), map.get(arrayList.get(i)));
            } else {
                map.put(arrayList.get(i), 1);
                System.out.format("%s@ptit.edu.vn\n", arrayList.get(i));
            }
        }
    }
}
