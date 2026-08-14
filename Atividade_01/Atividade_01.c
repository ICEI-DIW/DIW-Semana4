#include<stdio.h>

int Uppercase(char palavra[], int tamanho){
    int contador = 0;
    for(int x = 0; x < tamanho; x++){
        if(palavra[x] >= 'A' && palavra[x] <= 'Z'){
            contador++;
        }
    }
    return(contador);
}

void method_01(){
    char palavra[80] = "";
    int tamanho = 0;
    int qtd = 0;

    fgets(palavra, sizeof(palavra), stdin);
    
    while(palavra[0] != 'F' || palavra[1] != 'I' || palavra[2] != 'M' || (palavra[3] != '\n' && palavra[3] != '\0' && palavra[3] != '\r')){
        tamanho = 0;
        while(palavra[tamanho] != '\0' && palavra[tamanho] != '\n' && palavra[tamanho] != '\r'){
            tamanho++;
        }
        
        qtd = Uppercase(palavra, tamanho);
        printf("%d\n", qtd);
        
        fgets(palavra, sizeof(palavra), stdin);
    }
}

int main(){
    method_01();
    return 0;
}