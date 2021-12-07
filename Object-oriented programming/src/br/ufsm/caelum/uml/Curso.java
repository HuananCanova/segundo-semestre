package br.ufsm.caelum.uml;

public class Curso {
    private String nome;
    private Disciplina disciplina[] = new Disciplina[10];


    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Disciplina[] getDisciplina() {
        return disciplina;
    }

    public void setDisciplina(Disciplina[] disciplina) {
        this.disciplina = disciplina;
    }
}
