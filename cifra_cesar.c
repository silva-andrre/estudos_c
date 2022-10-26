#include <stdio.h>

int main(){

    //define as constantes que utilizaremos para rotacionar (ROTx) as letras 
    #define tamTexto 4
    #define qtdLetra 26

    //definicao de variaveis
    int i = 0, j = 0;
    char vetorTexto[tamTexto];
    char vetorLetras[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    //Lendo o texto a ser encriptado
    for(i=0; i < tamTexto; i++){
        scanf ("%c", &vetorTexto[tamTexto]);
    }

    for (i = 0; i < tamTexto; i++){
        for (j = 0; j < qtdLetra; j++){

            if (vetorTexto[i] == vetorLetras[j] && j+ 3 < qtdLetra){
                vetorTexto[i] = vetorLetras[j+ 3];
            }
            else{
                j = j + 3;
                j = j - qtdLetra;

                vetorTexto[i] = vetorLetras[j];
            }
        }
    }

    for (i = 0; i < tamTexto; i++){
        printf("%c", vetorTexto[i]);
    }
    
    return 0;

}