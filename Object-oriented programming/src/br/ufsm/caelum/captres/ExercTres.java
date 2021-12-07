package br.ufsm.caelum.captres;

public class ExercTres {

    public static void main(String[] args) {
        int fib = 0, prim = 0, seg = 1;

        while(fib <= 100){
            fib = prim + seg;
            prim = seg;
            seg = fib;
            System.out.println(fib);
        }

    }

}
