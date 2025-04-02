void linha2(char carac){
    
    for(int i = 0; i<25; i++){printf("%c", carac);}
    
}

void desenha_retangulo_solido(int linhas, int colunas, char carac){
    
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            printf("%c", carac);
        }
        printf("\n");
    }
    
}

void desenha_retangulo(int linhas, int colunas, char carac){
    
    for (int i=0; i<linhas; i++){
        
        for (int j=0; j<colunas; j++){
            if(i==0 || i==linhas-1 || j==0 || j==colunas-1){
                printf("%c", carac);   
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}

void desenha_retangulo_preenchido(int linhas, int colunas, char contorno, char preenchimento){
    
    for (int i=0; i<linhas; i++){
        
        for (int j=0; j<colunas; j++){
            if(i==0 || i==linhas-1 || j==0 || j==colunas-1){
                printf("%c", contorno);   
            }
            else{
                printf("%c", preenchimento);
            }
        }
        printf("\n");
    }
    
}

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