#include <stdio.h>
#include <stdlib.h>

int main() {
    float not1, not2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &not1);

    printf("Digite a segunda nota: ");
    scanf("%f", &not2);

    media = (not1 + not2) / 2;

    if (media >= 7.0) {
        //se a média for maior que 7.0 ou igual o aluno está aprovado!
        printf("Aprovado!");
    }
    else if (media >= 5.0){
        //se a média for maior ou igual a 5.0 o aluno está de recuperação!
        printf("Recuperação!");
    }
    else{
        //se não for maior que 5.0 ele está reprovado!
        printf("Reprovado!");
    }

    printf("\n");

    system("pause");

    return 0;
} 