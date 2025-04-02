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

double volume_of_sphere(double radius){
    
    double volume = 0;
    double pi = 3.14;
    
    volume = 4.0*pow_of_int(radius, 3)*pi/3.0;

    return volume;

}

double average_of_3(double first_grade, double second_grade, double third_grade){

    return (first_grade+second_grade+third_grade)/3;

}

int log_of_int(int base, int logarithmand){

    int result = 1;

    for (int i=0; log_of_int(base, i) <= logarithmand; i++){ 
        
        if (logarithmand == log_of_int(base, i)) { result = i; }
    
    }

    return result;

}

long factorial(long base){

    if (base < 0 ) { return 0; }
    if (base == 0){ return 1; }
    if (base > 0 ) {
    
        long result = base;

        for (long i = base-1; i>0; i-=1){ result = result*i; }

        return result;
    
    }
}

int check_prime(int number){

    if (number<=1){ return 0; } //negativos, nulo e 1 não são primos

    else{
        
        for (int i = 2; i < number; i++) {
        
            if (number%i==0){ return 0; }
            //havendo algum número maior que 1, menor que ele mesmo, não é primo
        }
        
        return 1; //caso contrário, é primo

    }

}

long fibo(int term){
    long t1=1, t2=1, t3=2;

    for (int i = 1; i<term; i++){
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }

    return t1;
}

int check_regular(int number){

    if (number<=1){ return 0; } //negativos, nulo e 1 não são primos

    else{
        
        for (int i = 1; i <= number; i++) {
        
            if ((i==2 || i== 3 || i==5) && number%i==0){ 
            
                do { number = number/i; } while (number%i==0);

            } // se o contador estiver em 2, 3, ou 5, e puder dividir o número, dividirá (...)
        }     // (...) até não haver mais divisão inteira
        
        if (number == 1){ return 1; } //se as continuas divisões resultarem em 1 no final, é regular
        else { return 0; } // senão, não é regular

    }

}

long combination(long elements, long groupings){

    long result = 0;

    result = factorial(elements)/(factorial(groupings)*factorial(elements-groupings));

    return result;

}

int check_perfect_number(int number){

    int sumCheck = 0;

    for (int i=1; i<number; i++){

        if ( number%i == 0 ) { sumCheck+=i; };

    }

    if ( sumCheck == number ) { return 1; }
    else { return 0; }

}