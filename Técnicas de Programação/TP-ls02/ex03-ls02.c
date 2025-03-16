#include <stdio.h>

double average_of_3(double first_grade, double second_grade, double third_grade){

    return (first_grade+second_grade+third_grade)/3;

}

int main(){

    double fst, scd, trd;

    printf("Primeira nota: ");
    scanf("%lf.2", &fst);
    printf("Segunda nota: ");
    scanf("%lf.2", &scd);
    printf("Terceira nota: ");
    scanf("%lf.2", &trd);

    printf("\nMédia: %.2lf\n", average_of_3(fst, scd, trd));
}