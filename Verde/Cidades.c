#include<stdio.h>
#include<string.h>
#define MAX 100

void count(char palavra[]){
    int tamanho = strlen(palavra);
   printf("%d\n", tamanho);

}
    



int main(){
char palavra[MAX] = "";
while(strcmp(palavra, "FIM")!= 0){
fgets(palavra, MAX, stdin);
palavra[strcspn(palavra, "\n")] = '\0';
if(strcmp(palavra, "FIM")!= 0){
count(palavra);
}

} 

return(0);
}