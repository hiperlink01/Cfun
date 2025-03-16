#include <stdio.h>

double pow_of_int(double base, int power){

    double result = 1;

    for (int i=0; i<power; i++){ result = result*base; }

    return result;

}

double area_of_circle(double radius){
    
    double area = 0;
    double pi = 3.14;
    
    area = pow_of_int(radius, 2)*pi;

    return area;

}

int main(){

    double radius = 0;
    
    printf("Para descobrir a area, por favor, insira o raio do circulo: ");
    scanf("%lf", &radius);
    
    printf("Area do circulo: %lf \n", area_of_circle(radius));

}
