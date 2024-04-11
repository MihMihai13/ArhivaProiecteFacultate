
import java.util.LinkedHashSet;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/**
 *
 * @author User
 */
public class LinkedHashSetExtended extends LinkedHashSet<Integer> {

    @Override
    public boolean add(Integer o) {
        if (o % 2 == 0) {
            return super.add(o);
        }
        return false;
    }

}
