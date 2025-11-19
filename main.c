#include <stdio.h>

typedef struct{
    char nome[20];
    int idade;
    float media;
}Aluno;

int main() {
    // Criando uma variável do tipo Aluno
    Aluno aluno1 = {"João", 20, 8.5};

    // Exibindo os dados do aluno
    printf("Aluno: %s\nIdade: %d\nMédia: %.2f\n", aluno1.nome, aluno1.idade, aluno1.media);
    return 0;
}