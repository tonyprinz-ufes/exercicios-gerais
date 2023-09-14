#include <stdio.h>
#include <aluno.h>

int main (){
    int contador;
    scanf ("%d", &contador);
    int i = 0;
    char nome[50];
    int matricula; 
    int n1, n2, n3;
    tAluno vetor[contador-1];
    while (i<=contador)
    {
    scanf("%s", nome);
    scanf("%d", &matricula);
    scanf("%d %d %d", &n1, &n2, &n3);
    vetor[i] = CriaAluno ( nome, matricula, n1, n2, n3);
    i ++;
    };
    
    return 0;
}