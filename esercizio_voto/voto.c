#include <stdio.h>

int main(){

    int voto;

    printf("Inserisci un voto: ");
    scanf("%i", &voto);

    switch (voto){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        printf("Voto: insufficiente\n"); // e' importante '\n' per la pulizia dell'output
        break;

        case 6:
        printf("Voto: sufficiente\n");
        break;

        case 7:
        case 8:
        printf("Voto: buono\n");
        break;

        case 9:
        case 10:
        printf("Voto: Ottimo\n");
        break;
        default:
        printf("Voto non valido!\n");
    }
return 0;

}