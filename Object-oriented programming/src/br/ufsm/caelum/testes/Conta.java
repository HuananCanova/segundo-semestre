package br.ufsm.caelum.testes;

    public class Conta {
        private String titular;
        private int num;
        private String ag;
        private double saldo;
        private Data dataAbertura;
        private static int identificador = 0;
}



class Data{
    private int dia;
    private int mes;
    private int ano;

    String dataFormatada(){
        String formatada;
        return formatada = dia+"/"+mes+"/"+ano;
    }

    

}
