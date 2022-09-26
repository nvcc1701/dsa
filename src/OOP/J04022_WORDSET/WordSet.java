/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J04022_WORDSET;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class WordSet {

    private TreeSet<String> set = new TreeSet<>();

    public WordSet() {
    }

    public WordSet(String s) {
        StringTokenizer st = new StringTokenizer(s.toLowerCase(Locale.ROOT));
        while (st.hasMoreTokens()) {
            set.add(st.nextToken());
        }
    }

    public String toString() {
        String kq = "";
        for (String i : set) {
            kq = kq + i + " ";
        }
        return kq.trim();
    }

    public WordSet union(WordSet a) {
        WordSet result = new WordSet();
        result.set.addAll(set);
        result.set.addAll(a.set);
        return result;
    }

    public WordSet intersection(WordSet a) {
        WordSet result = new WordSet();
        result.set.addAll(set);
        result.set.retainAll(a.set);
        return result;
    }

}
