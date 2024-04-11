
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.PriorityQueue;
import java.util.Random;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author cursant
 */
public class Main {

    public static void main(String[] args) {
        ArrayList<Student> students = new ArrayList<Student>();
        students.add(new Student("Andrei", "Ion", 20l, 10));
        students.add(new Student("Mihai", "Ion", 10l, 8));
        students.add(new Student("Ana", "Maria", 13l, 7));
        students.add(new Student("Matei", "Dan", 42l, 10));
        students.add(new Student("Avram", "Alexandru", 24l, 6));
        Collections.sort(students);

        for (Student stud : students) {
            System.out.println(stud);
        }
        System.out.println("\n");
        students.sort((o1, o2) -> (int) (o2.averageGrade - o1.averageGrade));

        for (Student stud : students) {
            System.out.println(stud);
        }
        System.out.println("\n");
        Comparator<Student> c = new Comparator<Student>() {
            @Override
            public int compare(Student o1, Student o2) {
                return Long.compare(o1.getId(), o2.getId());
            }
        };
        PriorityQueue<Student> queue = new PriorityQueue<Student>(c);
        queue.addAll(students);
        for (Student stud : queue) {
            System.out.println(stud);
        }
        System.out.println("\n");

        String subjects[] = {"matematica", "fizica", "chimie"};
        LinkedList<String> materii = new LinkedList<String>();
        Random r = new Random();

        Map<Student, LinkedList<String>> studentsMap = new HashMap<Student, LinkedList<String>>();

        materii.add(subjects[r.nextInt(3)]);
        materii.add(subjects[r.nextInt(3)]);
        studentsMap.put(new Student("Andrei", "Ion", 20, 10), new LinkedList<String>(materii));
        materii.clear();

        materii.add(subjects[r.nextInt(3)]);
        materii.add(subjects[r.nextInt(3)]);
        studentsMap.put(new Student("Mihai", "Ion", 10, 8), new LinkedList<String>(materii));
        materii.clear();

        materii.add(subjects[r.nextInt(3)]);
        materii.add(subjects[r.nextInt(3)]);
        studentsMap.put(new Student("Ana", "Maria", 13, 7), new LinkedList<String>(materii));
        materii.clear();

        materii.add(subjects[r.nextInt(3)]);
        materii.add(subjects[r.nextInt(3)]);
        studentsMap.put(new Student("Matei", "Dan", 42, 10), new LinkedList<String>(materii));
        materii.clear();

        materii.add(subjects[r.nextInt(3)]);
        materii.add(subjects[r.nextInt(3)]);
        studentsMap.put(new Student("Avram", "Alexandru", 24, 6), new LinkedList<String>(materii));
        materii.clear();
        System.out.println(studentsMap);
        System.out.println("\n");

        LinkedHashSetExtended x = new LinkedHashSetExtended();
        x.add(5);
        x.add(2);
        x.add(3);
        x.add(10);
        x.add(8);
        System.out.println(x);

        TreeSetExtended y = new TreeSetExtended();
        y.add(5);
        y.add(2);
        y.add(3);
        y.add(10);
        y.add(8);
        System.out.println(y);

        HashSetExtended z = new HashSetExtended();
        z.add(5);
        z.add(2);
        z.add(3);
        z.add(10);
        z.add(8);
        System.out.println(z);
    }
}
