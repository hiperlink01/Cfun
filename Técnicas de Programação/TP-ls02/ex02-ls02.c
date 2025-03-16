#include <stdio.h>

double pow_of_int(double base, int power){

    double result = 1;

    for (int i=0; i<power; i++){ result = result*base; }

    return result;

}

double volume_of_sphere(double radius){
    
    double volume = 0;
    double pi = 3.14;
    
    volume = 4.0*pow_of_int(radius, 3)*pi/3.0;

    return volume;

}

int main(){

    double radius = 0;

    printf("Para descobrir o volume, por favor, insira o raio da esfera: ");
    scanf("%lf", &radius);
    
    printf("\nVolume da esfera: %lf \n", volume_of_sphere(radius));

}