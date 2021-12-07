package br.ufsm.caelum.capquatro;

public class Conta{
    String titular;
    int num;
    String ag;
    double saldo;
    Data dataAbertura;


    Conta(){
        System.out.println("Output do construtor");
    }

    void saca(double qtd){
        this.saldo -= qtd;
    }

    void deposita(double qtd){
        this.saldo += qtd;
    }

    double calculaRendimento(){
        double rend;
        return rend = this.saldo * 0.1;
    }

    String recuperaDadosParaImpressao(){
        String dados = "Titular: "+this.titular+" Número da conta: "+this.num+
        " Agência: "+this.ag+ " Saldo: "+this.saldo+ "Data de abertura da conta: " + this.dataAbertura.dataFormatada();
        return dados;
    }
}

class Data{
    int dia;
    int mes;
    int ano;

    String dataFormatada(){
        String formatada = dia+"/"+mes+"/"+ano;
        return formatada;
    }

}
