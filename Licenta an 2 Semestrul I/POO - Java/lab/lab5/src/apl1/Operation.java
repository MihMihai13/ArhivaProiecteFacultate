/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package apl1;

interface Minus {

    void minus(float value);
}

interface Plus {

    void plus(float value);
}

interface Mult {

    void mult(float value);
}

interface Div {

    void div(float value);
}

public class Operation implements Minus, Plus, Mult, Div {

    float value;

    public Operation(float value) {
        this.value = value;
    }

    @Override
    public void minus(float a) {
        value -= a;
    }

    @Override
    public void plus(float a) {
        value += a;
    }

    @Override
    public void mult(float a) {
        value *= a;
    }

    @Override
    public void div(float a) {
        if (a == 0) {
            System.out.println("Division by zero is not possible");
        } else {
            value /= a;
        }
    }

    public float getNumber() {
        return value;
    }

}
