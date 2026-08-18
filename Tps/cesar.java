package Tps;
import java.util.Scanner;
    
public class cesar{

public static String cifra (String palavra){
int tamanho = palavra.length();
char letra  = ' ';
String s = "";
for(int x = 0; x < tamanho; x++){
    letra = (char)(palavra.charAt(x)+3);
    s = s + letra;
}
return(s);
}


public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    String palavra = "";
    String cifrada = "";
    palavra = sc.nextLine();
    CompareTo comparada = new CompareTo(palavra);

    while(!comparada.compareto("FIM")){
        if(!comparada.compareto("FIM")){
        cifrada = cifra(palavra);
        System.out.println(cifrada);
        }
        palavra = sc.nextLine();
        comparada = new CompareTo(palavra);
    }
    sc.close();
}
}
