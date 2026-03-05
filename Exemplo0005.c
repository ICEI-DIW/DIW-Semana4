    /*Exemplo0005- v0.0 - 24 / 02 / 2026
Author:Gustavo martins de avila*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void method_01(void){
    printf(" Metodo1\n");
    printf ( "\n\nApertar ENTER para continuar." );
    getchar();}
int main(int agrc, char* argv[]){
// definir dados / resultados
    int opcao = 0;
// identificar
    printf("%s\n", "Exemplo0005 - Programa= 0.0v");
    printf("%s\n","Autor:Gustavo martins de avila");
    printf("\n");
// acoes
do{
// para mostrar opcoes
    printf("\nOpcoes:");
    printf("\n 0- Terminar");
    printf("\n 1- Metodo 01");
    printf("\n");
// ler a opcao do teclado
    printf("\n%s", "Opcao: ");
    scanf("%d", &opcao);
    getchar();
    printf("\nOpcao: %d ", opcao);
    // escolher acao dependente da opcao
    switch(opcao){
    case 0:
    break;
    case 1:
    method_01();
    
    default:printf("\nErro:Opcao invalida.\n");
    }
}while(opcao != 0);
    printf ( "\n\nApertar ENTER para terminar." );
    getchar();
    return 0;
}

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0.5
b.) -0.5
c.) 1.23456789
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
0.2 __/__ mudanca de versao
---------------------------------------------- testes
Versao Teste
0.0 01. ( OK ) identificacao de programa
0.1 01. ( OK ) identificacao de programa


*/