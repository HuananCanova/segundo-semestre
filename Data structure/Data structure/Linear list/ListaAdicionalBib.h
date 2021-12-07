#include<string.h>

struct dadosFuncionario
{
    int matricula;
    char nome[30], cargo[10];
    double salario;
} funcionario[50];

int insereFuncionario(int n)
{

    printf("Insira a matricula do funcionario: ");
    scanf("%d", &funcionario[n].matricula);
    fflush(stdin);
    printf("Insira o nome do funcionario: ");
    fgets(funcionario[n].nome, 30, stdin);
    printf("Insira o cargo do funcionario: ");
    fgets(funcionario[n].cargo, 10, stdin);
    printf("Insira o salario do funcionario: ");
    scanf("%lf", &funcionario[n].salario);
    n++;

    return n;
}

void localizaFuncionario(int n, int mat)
{
    int cont = 0;
    for (int i = 0; i <= n; i++)
    {
        if (funcionario[i].matricula == mat)
        {
            cont++;
            printf("Matricula: %d\n", funcionario[i].matricula);
            printf("Nome: %s", funcionario[i].nome);
            printf("Cargo: %s", funcionario[i].cargo);
            printf("Salario: %.2lf\n", funcionario[i].salario);
        }
    }

    if (cont == 0)
    {
        printf("\nMatricula nao encotrada!\n");
    }
}

int demiteFuncionario(int n, int mat)
{
    int cont = 0;
    for (int i = 0; i <= n; i++)
    {
        if (funcionario[i].matricula == mat)
        {
            cont++;
            printf("\nFuncionario (matricula %d) demitido!", funcionario[i].matricula);
            if (i == n - 1)
            {
                n--;
            }
            else if (i < n - 1)
            {
                for (int j = (i + 1); i <= n; i++)
                {
                    funcionario[i].matricula = funcionario[i+1].matricula;
                    strcpy(funcionario[i].nome, funcionario[i+1].nome);
                    strcpy(funcionario[i].cargo, funcionario[i+1].cargo);
                    funcionario[i].salario = funcionario[i+1].salario;
                }
                
            }
        }
    }

    if (cont == 0)
    {
        printf("\nMatricula nao encotrada!\n");
    }

    return n;
}

void listaFuncionario(int n){
    int cont = 0;
    for (int i = 0; i <= n; i++)
    {
        if (funcionario[i].salario >= 2500 && funcionario[i].salario <= 6800)
        {
            cont++;
            printf("\nNome: %s salario: %.2lf\n", funcionario[i].nome, funcionario[i].salario);
        }
    }
    if (cont == 0)
    {
        printf("\nNenhum funcionario com salario compativel.\n");
    }
    
    
}