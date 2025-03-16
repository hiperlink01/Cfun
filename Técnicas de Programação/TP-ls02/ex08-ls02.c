#include <stdio.h>

long fibo(int term){
    long t1=1, t2=1, t3=2;

    for (int i = 1; i<term; i++){
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }

    return t1;
}

int main(){

    int term;
    
    do{
            
        printf("Busque o termo da sequência de fibonacci: ");
        scanf("%d", &term);

        printf("\n%ld\n\n", fibo(term));
        
    } while (term!=-1);

}