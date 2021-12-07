package br.ufsm.caelum.uml;

public class Main {
    public static void main(String[] args) {
        Curso curso = new Curso();
        Disciplina disciplina = new Disciplina();
        Turma turma = new Turma();
        turma.iniciaTurma();
        turma.mostraTurma();
    }
}
