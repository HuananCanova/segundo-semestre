package br.ufsm.caelum.uml;

import javax.swing.*;

public class Turma {
    private int codigo;
    private Professor professor;
    Aluno aluno = new Aluno();
    Aluno aluno1 = new Aluno();


    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    void iniciaTurma(){

        professor = new Professor();
        professor.setMatricula(1221);
        professor.setNome("Jonas");
        aluno.setNome("Huanan");
        aluno1.setNome("Nathalia");
        setCodigo(01);
    }

    void mostraTurma(){
        System.out.println("Professor: " + professor.getNome() + "\nAlunos: " + aluno.getNome()
                +" "+ aluno1.getNome() +  "\ncodigo turma: " + getCodigo());
    }



}
