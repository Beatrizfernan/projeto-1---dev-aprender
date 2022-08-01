#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_ALUNOS 50
typedef struct {
    char nome[50];
    int notas [4];
    int ativo;
    
} Aluno;
Aluno alunos [MAX_ALUNOS];

void menu ();
int main(int argc, char const *argv[])
{
  menu();
  return 0;
}
void menu(){
    system("cls");
    printf("\n1 - cadastrar aluno\n2 - remover aluno \n");
    printf("\n3 - cadastrar aluno\n2 - remover aluno \n");
}

