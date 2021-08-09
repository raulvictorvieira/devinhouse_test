#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, in;
    float notas[5], maior, menor, intermed[3];
    char atleta[20];

    system("cls");
    printf("Digite o nome do atleta: ");
    scanf("%s", &atleta);

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

    printf("A maior nota do atleta %s foi %.1f \n", atleta, maior);
    printf("A menor nota do atleta %s foi %.1f \n", atleta, menor);
    printf("As notas intermediarias sao: %.1f, %.1f e %.1f.", intermed[0], intermed[1], intermed[2]);
    return(0);
}