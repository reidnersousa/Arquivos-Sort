#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

#define TAM 5

struct alunoVetor{
    int matricula;
    char nome[30];
    float n1,n2,n3;

};

struct balde{
    int qtd;
    int valores[TAM];
};

typedef struct estudante Estudante;
struct estudante{
    char nome[81];
    char mat[8];
    char turma;
    char email[41];
};

#endif // BUBBLESORT_H_INCLUDED
