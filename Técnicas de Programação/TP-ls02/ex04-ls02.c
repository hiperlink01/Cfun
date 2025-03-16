#include <stdio.h>

void print_month(int month){
    switch(month){
        case 1:
            printf("Janeiro");
            return;
        case 2:
            printf("Fevereiro");
            return;
        case 3:
            printf("Março");
            return;
        case 4:
            printf("Abril");
            return;
        case 5:
            printf("Maio");
            return;
        case 6:
            printf("Junho");
            return;
        case 7:
            printf("Julho");
            return;
        case 8:
            printf("Agosto");
            return;
        case 9:
            printf("Setembro");
            return;
        case 10:
            printf("Outubro");
            return;
        case 11:
            printf("Novembro");
            return;
        case 12:
            printf("Dezembro");
            return;
        default:
            printf("Não há mês correspondente.");
            return;
    }


}

int main(){

    int month = 0;
    printf("Informe um número correspondente a um mês: ");
    scanf("%d", &month);

    print_month(month);

}