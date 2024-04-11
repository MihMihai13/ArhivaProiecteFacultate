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
public class Student {
    private String name;
    private double grade;
    
    public Student(String name, double grade){
        this.name = name;
        this.grade = grade;
    }
    
    public String getName() {
        return name;
    }
    
    public double getGrade() {
        return grade;
    }
    
    public String toString(){
        return name;
    }
}
