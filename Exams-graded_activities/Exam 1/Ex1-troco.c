#include <stdio.h>
#include <stdlib.h>

int* calc_troco(double troco){

    int troco_int = (int) (troco*100);

    int* moedas = (int*) malloc(sizeof(int)*7);
    
    while (troco_int - 200 >= 0){
    
        troco_int = troco_int - 200;
        moedas[6]++;
    
    }

    while (troco_int - 100 >= 0){
    
        troco_int = troco_int-100;
        moedas[5]++;
    
    }

    while (troco_int - 50 >= 0)
    {
        troco_int = troco_int-50;
        moedas[4]++;
    }

    while (troco_int - 25 >= 0)
    {
        troco_int = troco_int-25;
        moedas[3]++;
    
    }
    
    while (troco_int - 10 >= 0)
    {
        troco_int = troco_int-10;
        moedas[2]++;
    
    }

    while (troco_int - 5 >= 0)
    {
        troco_int = troco_int-5;
        moedas[1]++;
    
    }
    while (troco_int - 1 >= 0)
    {
        troco_int = troco_int-1;
        moedas[0]++;
    
    }

    return moedas;

}

int main(){
    double troco;
    int *moedas;

    printf("Troco: ");
    scanf("%lf.2", &troco);

    moedas = calc_troco(troco);

    printf("Moedas:\n\n");

    for (int i=6; i>=0; i--){

        switch (i)
        {
        case 0:
            if (moedas[i]!=0){printf("Moeda de R$ 0,01: %d\n", moedas[i]);}
            break;
        
        case 1:
            if (moedas[i]!=0){printf("Moeda de R$ 0,05: %d\n", moedas[i]);}
            break;
        
        case 2:
            if (moedas[i]!=0){printf("Moeda de R$ 0,10: %d\n", moedas[i]);}
            break;
        
        case 3:
            if (moedas[i]!=0){printf("Moeda de R$ 0,25: %d\n", moedas[i]);}
            break;
        
        case 4:
            if (moedas[i]!=0){printf("Moeda de R$ 0,50: %d \n", moedas[i]);};
            break;
        
        case 5:
            if (moedas[i]!=0){printf("Moeda de R$ 1,00: %d\n", moedas[i]);}
            break;
        case 6:
            if (moedas[i]!=0){printf("Moeda de R$ 2,00: %d\n", moedas[i]);}
            break;
        
        }

    }
return 0;

}