package br.ufsm.caelum.capcinco;

import jdk.swing.interop.SwingInterOpUtils;

public class Main {
    public static void main(String[] args) {
        Conta c = new Conta("Huanan");
        Data da = new Data();
        da.setDia(5);
        da.setMes(10);
        da.setAno(2000);

        c.recuperaDadosParaImpressao();

    }
}
