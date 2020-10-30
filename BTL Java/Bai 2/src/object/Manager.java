package object;

import comparator.ClassComparator;
import comparator.NameComparator;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Manager {
    Scanner sc = new Scanner(System.in);
    private List<Student> students = new ArrayList<Student>();

    public void add() {
        System.out.print("Nhap MSV: "); String msv = sc.nextLine();
        System.out.print("Nhap ho ten: "); String ten = sc.nextLine();
        System.out.print("Nhap lop: "); String lop = sc.nextLine();
        System.out.print("Nhap khoa: "); String khoa = sc.nextLine();
        Student s = new Student(msv, ten, lop, khoa);
        students.add(s);
    }

    public void show() {
        for(Student s: students) {
            s.show();
            System.out.println();
        }
    }

    public void sortByName() {
        Collections.sort(students, new NameComparator());
    }

    public void sortByClass() {
        Collections.sort(students, new ClassComparator());
    }
}
