#include"Functions_01.h"

void method_01(){
char palavra[80] = "";
int tamanho = 0;
int qtd = 0;

while(palavra[0] != 'F' && palavra[1] != 'I' && palavra[2] != 'M' && palavra[3] != ' '){
    printf("%s", "Escolha uma palavra: ");
fgets(palavra, sizeof(palavra), stdin);
qtd = Uppercase(palavra, tamanho);
printf("%s%d\n", "Maiusculas: ", qtd);
}
}




void method_02(){
char palavra[80] = "";
int tamanho = 0;
int qtd = 0;
int contador = 0;
while(palavra[0] != 'F' && palavra[1] != 'I' && palavra[2] != 'M' && palavra[3] != ' '){
    printf("%s", "Escolha uma palavra: ");
fgets(palavra, sizeof(palavra), stdin);
 while(palavra[tamanho] != '\0'){
tamanho++;
}
qtd = RecursiveUppercase(palavra, tamanho, contador);
printf("%s%d\n", "Maiusculas: ", qtd);
}
}





