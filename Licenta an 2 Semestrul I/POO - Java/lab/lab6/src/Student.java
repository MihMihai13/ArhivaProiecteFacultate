
import java.util.Objects;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author cursant
 */
public class Student implements Comparable<Student> {

    public String name;
    public String surname;
    public long id;
    public double averageGrade;

    public Student(String name, String surname, long id, double averageGrade) {
        this.name = name;
        this.surname = surname;
        this.id = id;
        this.averageGrade = averageGrade;
    }

    public String getName() {
        return name;
    }

    public String getSurname() {
        return surname;
    }

    public long getId() {
        return id;
    }

    public double getAverageGrade() {
        return averageGrade;
    }
       
    
    
    @Override
    public int compareTo(Student o) {
        if (averageGrade == o.averageGrade) {
            if (name.equals(o.name)) {
                return surname.compareTo(o.surname);
            } else {
                return name.compareTo(o.name);
            }
        } else {
            return (int) (averageGrade - o.averageGrade);
        }
    }

    @Override
    public String toString() {
        return "Student{" + "name=" + name + ", surname=" + surname + ", id=" + id + ", averageGrade=" + averageGrade + '}';
    }

    @Override
    public int hashCode() {
        int hash = 7;
        hash = 97 * hash + Objects.hashCode(this.name);
        hash = 97 * hash + Objects.hashCode(this.surname);
        hash = 97 * hash + (int) (this.id ^ (this.id >>> 32));
        hash = 97 * hash + (int) (Double.doubleToLongBits(this.averageGrade) ^ (Double.doubleToLongBits(this.averageGrade) >>> 32));
        return hash;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        final Student other = (Student) obj;
        if (this.id != other.id) {
            return false;
        }
        if (Double.doubleToLongBits(this.averageGrade) != Double.doubleToLongBits(other.averageGrade)) {
            return false;
        }
        if (!Objects.equals(this.name, other.name)) {
            return false;
        }
        return Objects.equals(this.surname, other.surname);
    }
    
    

}
