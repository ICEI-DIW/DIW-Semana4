#include<stdio.h>
#include<string.h>

void even_odd(int array[], int qtd){
for(int x = 0; x < qtd; x++){
if(array[x] % 2 == 0){

printf("%s\n", "PAR");
}
else{


    printf("%s\n", "IMPAR");
}
}



}

int main(){
int qtd = 0;
scanf("%d", &qtd);getchar();
int array[qtd];
for(int x = 0; x < qtd; x++){
    scanf("%d", &array[x]);getchar();
}
even_odd(array, qtd);

return(0);
}