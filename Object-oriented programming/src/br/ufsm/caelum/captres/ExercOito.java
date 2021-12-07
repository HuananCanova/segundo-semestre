package br.ufsm.caelum.captres;

public class ExercOito {
    public static void main(String[] args){
        int n = 6;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                int num = i * j;
                System.out.print(num + " ");
            }
            System.out.println("");
        }

    }

}
