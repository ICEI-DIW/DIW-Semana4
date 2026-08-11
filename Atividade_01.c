#include"Atividade_01.h"
void recursao(int qtd){
if(qtd > 0){
recursao(qtd-1);
printf("%d%s%d\n", qtd, ":Metodo-", qtd);


}




}

int main(){
int opcao = 0;
int qtd = 2;
printf("%s", "Escolha um metodo:\n");
recursao(qtd);
scanf("%d", &opcao);getchar();
switch(opcao){
    case 1:
    method_01();
    break;
    case 2:
    method_02();
    break;
    default:
    printf("%s\n", "Metodo Invalido!");
}
}