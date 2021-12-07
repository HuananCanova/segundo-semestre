package br.ufsm.caelum.uml;

public class Disciplina {
    private int codigo;
    private String nome;
    Turma turma = new Turma();;

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
}
