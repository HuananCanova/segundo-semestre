package br.ufsm.caelum.captres;

class Conta {
    int numConta;
    double saldo;
    String nome;


    void deposita(double quantidade){
        this.saldo += quantidade;
    }

}


public class TestesCaelum {
        public	static	void	main(String[]	args) {
            Conta	c1	=	new	Conta();
            c1.deposita(100);
            Conta	c2	=	c1;		//	linha	importante!
            c2.deposita(200);
            System.out.println(c1.saldo);
            System.out.println(c2.saldo);
    }
}


