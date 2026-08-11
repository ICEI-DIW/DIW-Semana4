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




int RecursiveUppercase(char palavra[], int tamanho, int contador){
if(tamanho < 0){
return(contador);
}
  if(palavra[tamanho] >= 'A' && palavra[tamanho] <= 'Z'){
            contador++;
}

return(RecursiveUppercase(palavra, tamanho-1, contador));
}