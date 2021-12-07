package br.ufsm.caelum.capcinco;

public class Conta {
    private String titular;
    private int num;
    private String ag;
    private double saldo;
    private Data dataAbertura;
    private static int identificador = 0;


    String recuperaDadosParaImpressao(){
        String dados = "Titular: "+this.titular+" Número da conta: "+this.num+
                " Agência: "+this.ag+ " Saldo: "+this.saldo+ "Data de abertura da conta: "
                    + this.dataAbertura.dataFormatada();
        return dados;
    }

    private double calculaRendimento(){
        double rend;
        return rend = this.saldo * 0.1;
    }

    Conta(){
        Conta.identificador = Conta.identificador + 1;
    }

    Conta(String titular){
        this.titular = titular;
        System.out.println("Output do construtor /0/");
        Conta.identificador = Conta.identificador + 1;
    }

    public static int getIdentificador(){
        return Conta.identificador;
    }

    public void setSaca(double qtd){
        if (qtd > 0 && qtd <= this.saldo){
            this.saldo -= qtd;
        }else{
            System.out.println("Quantia invalida!");
        }
    }

    void setDeposita(double qtd){
        if (qtd > 0){
            this.saldo += qtd;
        }else{
            System.out.println("Erro!");
        }

    }


    public String getTitular() {
        return titular;
    }

    public void setTitular(String titular) {
        this.titular = titular;
    }


    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

}



class Data{
    private int dia;
    private int mes;
    private int ano;

    String dataFormatada(){
        String formatada;
        return formatada = dia+"/"+mes+"/"+ano;
    }

    public int getDia() {
        return dia;
    }

    public void setDia(int dia) {
        if (dia <= 0 || dia > 31){
            System.out.println("Dia inválido!");
        }else{
            this.dia = dia;
        }

    }

    public int getMes() {
        return mes;
    }

    public void setMes(int mes) {
        if (mes <= 0 || mes > 12){
            System.out.println("Mês inválido!");
        }else{
            this.mes = mes;
        }

    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        if (ano <= 1000 || ano > 2500){
            System.out.println("Ano inválido!");
        }else{
            this.ano = ano;
        }

    }
}