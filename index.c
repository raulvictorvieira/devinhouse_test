#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, in;
    float notas[5], maior, menor, intermed[3], media;
    char atleta[20];

    system("cls");
    printf("******************************************************************************\n");
    printf("Digite o nome do atleta: ");
    scanf("%s", &atleta);

    printf("\n***** NOTAS *****\n");
    for (i = 0; i <= 4; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    maior = notas[0];
    menor = notas[0];

    for (i = 0; i <= 4; i++){
        if(notas[i] > maior){
            maior = notas[i];
        }

        if(notas[i] < menor){
            menor = notas[i];
        }
    }

    in = 0;

    for (i = 0; i <= 4; i++){
        if(notas[i] < maior & notas[i] > menor){
            intermed[in] = notas[i];
            in++;
        }
    }

    media = (intermed[0] + intermed[1] + intermed[2]) / 3;

    printf("\nA maior nota do(a) atleta %s foi %.1f e a menor foi: %.1f \n", atleta, maior, menor);
    printf("As notas intermediarias sao: %.1f, %.1f e %.1f\n", intermed[0], intermed[1], intermed[2]);
    printf("A media das notas intermediarias: %.1f", media);
    printf("\n******************************************************************************");
    return(0);
}