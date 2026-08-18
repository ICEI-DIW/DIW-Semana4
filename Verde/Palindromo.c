#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 100

bool palindromo(char palavra[]){
    int inicio = 0;
    int fim = strlen(palavra) - 1;

    while(inicio < fim){
        if(palavra[inicio] != palavra[fim]){
            return false;
        }
        inicio++;
        fim--;
    }

    return true;
}

int main(){
    char palavra[MAX];

    while(fgets(palavra, MAX, stdin) != NULL){
        palavra[strcspn(palavra, "\r\n")] = '\0';

        if(strcmp(palavra, "FIM") == 0){
            break;
        }

        if(palindromo(palavra)){
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }

    return 0;
}