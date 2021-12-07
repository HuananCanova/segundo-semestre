package br.ufsm.caelum.capquatro;

public class Main {
    public static void main(String[] args) {
        Conta c1 = new Conta();
        Conta c2 = new Conta();

        Data data = new Data();
        c1.dataAbertura = data;


        c1.titular = "Huanan";
        c1.num = 10817;
        c1.ag = "Santander";
        c1.saldo = 3000;
        c1.dataAbertura.dia = 2;
        c1.dataAbertura.mes = 7;
        c1.dataAbertura.ano = 2022;

        c1.deposita(2500);
        System.out.println("Saldo conta 1 = " + c1.saldo);

        System.out.println(c1.recuperaDadosParaImpressao());

    }
}
