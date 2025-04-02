#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char classificar_senha(char senha[]){

    int cont_pontos = 0;
    int cont_M = 0;
    int cont_m = 0, cont_num=0, cont_esp = 0;

    if (strlen(senha) >=8 ){ cont_pontos++; };

    for (int i = 0; i< strlen(senha); i++){

        if (senha[i]>='a' && senha[i]<='z'){cont_m++;}
        if (senha[i]>='A' && senha[i]<='Z'){cont_M++;}
        if (senha[i]>='0' && senha[i]<='9'){cont_num++;}
        if (senha[i]=='@' || senha[i]=='#' ||senha[i]=='$' ||senha[i]=='&' ||senha[i]=='*')
        { cont_esp++;}

    }

    if (cont_esp!=0){cont_pontos++;};
    if (cont_m!=0){cont_pontos++;};
    if (cont_M!=0){cont_pontos++;};
    if (cont_num!=0){cont_pontos++;};

    switch (cont_pontos){
    case 5:
        return 'A';
        break;
    case 4:
    case 3:
        return 'B';
        break;

    default:
        return 'C';
        break;
    }

}

int main(){ 
    
    char senha[100];

    printf("Insira sua senha:\n\n");
    scanf("%s", senha);

    printf("Classificação da sua senha: %c", classificar_senha(senha));
    
    return 0;

}