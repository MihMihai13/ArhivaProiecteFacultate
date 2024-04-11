/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab2apl1;

import static java.lang.Double.parseDouble;
import java.util.*;

/**
 *
 * @author cursant
 */
public class Internship {

    private String name;
    private String minGrade;
    private Student students[];

    public Internship(String name, String minGrade, Student students[]) {
        this.name = name;
        this.minGrade = minGrade;
        this.students = students;
    }

    public Student chooseCandidateRandomly() {
        Random rdn = new Random();
        return students[rdn.nextInt(students.length)];
    }

    public void chooseCandidatesFosrInterview() {
        for (int i = 0; i < students.length; i++) {
            if (students[i].getGrade() >= parseDouble(minGrade)) {
                System.out.println("Candidate " + students[i].getName() + " got a phone interview at " + this.name);
            }
        }
    }
}
