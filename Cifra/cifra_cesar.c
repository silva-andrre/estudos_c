#include <stdio.h>

int main(int argc, char* argv[]){

    //define as constantes que utilizaremos para rotacionar (ROTx) as letras 
    //#define TAM_TEXTO 4
    #define QTD_LETRA 26

    //definicao de variaveis
    int rot_texto = 0;
    int vetorTexto[rot_texto];
    char vetorLetras[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    printf("Digite um número inteiro para definir o rotacionamento: ");
    scanf ("%d", &vetorTexto[rot_texto]);

/*
    //Lendo o texto a ser encriptado
    for(i=0; i < TAM_TEXTO; i++){
        scanf ("%c", &vetorTexto[TAM_TEXTO]);
    }

    for (i = 0; i < TAM_TEXTO; i++){
        for (j = 0; j < QTD_LETRA; j++){

            if (vetorTexto[i] == vetorLetras[j] && j+ 3 < QTD_LETRA){
                vetorTexto[i] = vetorLetras[j+ 3];
            }
            else{
                j = j + 3;
                j = j - QTD_LETRA;

                vetorTexto[i] = vetorLetras[j];
            }
        }
    }

    for (i = 0; i < TAM_TEXTO; i++){
        printf("%c", vetorTexto[i]);
    }
  */  
    return 0;

}