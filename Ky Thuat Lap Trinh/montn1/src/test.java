

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

/**
 *
 * @author tungn
 */
public class test {

    static int V, E, u, v;
    static boolean[] visited = new boolean[1005];
    static TreeSet<Integer>[] ke = new TreeSet[1005];
    static int[] truoc = new int[1005];

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));

        int t = sc.nextInt();
        
        while (t-- > 0) {
            
            V = sc.nextInt();
            E = sc.nextInt();
            u = sc.nextInt();
            v = sc.nextInt();

            for (int i = 0; i < 1005; i++) {
                ke[i] = new TreeSet<>();
                visited[i] = false;
                truoc[i] = -1;
            }

            for (int i = 0; i < E; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                ke[a].add(b);
            }

            bfs();
        }
    }

    static void bfs() {

        visited[u] = true;
        LinkedList<Integer> q = new LinkedList<>();
        q.offer(u);
        
        while (!q.isEmpty()) {
            int x = q.pop();
            for (int y : ke[x]) {
                if (!visited[y]) {
                    truoc[y] = x;
                    visited[y] = true;
                    q.offer(y);
                }
            }
        }

        if (truoc[v] == -1) {
            System.out.println("-1");
            return;
        }

        ArrayList<Integer> st = new ArrayList<>();
        while (v != -1) {
            st.add(v);
            v = truoc[v];
        }

        for (int i = st.size() - 1; i > 0; i--) {
            System.out.print(st.get(i) + " -> ");
        }
        System.out.print(st.get(0));
//        System.out.println(v);

        System.out.println();

    }
}