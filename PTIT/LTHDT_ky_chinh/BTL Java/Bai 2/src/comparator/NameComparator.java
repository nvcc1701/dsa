package comparator;

import java.util.Comparator;
import object.Student;

public class NameComparator implements Comparator<Student> {
    public int compare(Student s1, Student s2){
        String name1 = s1.getName();
        String name2 = s2.getName();

        if(name1 == name2) return 0;
        if(name1 == null) return -1;
        if(name2 == null) return -1;
        return name1.compareToIgnoreCase(name2);
    }
}
