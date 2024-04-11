/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab2apl1;

/**
 *
 * @author cursant
 */
public class Lab2Apl1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Student s1 = new Student("George", 50);
        Student s2 = new Student("Mihai", 80);
        Student s3 = new Student("Andrei", 75);
        Student s4 = new Student("Alexandru", 90);
        Student s[] = new Student[4];
        s[0] = s1;
        s[1] = s2;
        s[2] = s3;
        s[3] = s4;
        Internship google = new Internship("Google", "90", s);
        Internship amazon = new Internship("Amazon", "70", s);
        Internship facebook = new Internship("Facebook", "50", s);
        Internship microsoft = new Internship("Microsoft", "80", s);
        google.chooseCandidatesFosrInterview();
        System.out.print('\n');
        amazon.chooseCandidatesFosrInterview();
        System.out.print('\n');
        facebook.chooseCandidatesFosrInterview();
        System.out.print('\n');
        microsoft.chooseCandidatesFosrInterview();
    }
    
}
