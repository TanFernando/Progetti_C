#include <stdio.h>

int main(){

int eta =0;

// ciclo per validazione input
do{
printf("Inserisci l'eta': ");
scanf("%i", &eta);
if (eta==0){
    printf("Hai inserito lo zero. Prova a inserire un valore maggiore di zero\n");
}
else if (eta<0){
    printf("Hai inserito un valore negativo. Prova nuovamente!\n");
}
}while(eta<=0);      // continua a ciclare finche' l'eta' non è > 0

// dopo il ciclo di validazione
if(eta<18){
    printf("Sei minorenne!\n");
}
else if(eta>=18 && eta<=65){
    printf("Sei in eta' lavorativa!\n");
}
else{
    printf("Sei in pensione!");
}

return 0;

}