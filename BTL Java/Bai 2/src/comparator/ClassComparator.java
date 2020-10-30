package comparator;

import object.Student;

import java.util.Comparator;

public class ClassComparator implements Comparator<Student> {
    public int compare(Student s1, Student s2) {
        String class1 = s1.getLop();
        String class2 = s2.getLop();

        if(class1 == class2) return 1;
        return class1.compareToIgnoreCase(class2);
    }
}
