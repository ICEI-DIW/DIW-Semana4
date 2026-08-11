import java.util.Scanner;
public class Atividade_01 {
    public static void main(String[] args){
        String palavra = "";
        Scanner sc = new Scanner(System.in);
        int qtd = 0;
        do{
        System.out.print("Escolha uma palavra:");
        palavra = sc.nextLine();
        qtd = Upper(palavra);
        System.out.println(qtd);
        }while(palavra.compareTo("FIM")!= 0);




    
    }
    public static int Upper(String palavra){
        int tamanho = palavra.length();
        int caractere = 0;
        int contador = 0;
        for(int x = 0; x < tamanho; x++){
           caractere =(int)palavra.charAt(x);
        if(caractere >=65 && caractere <=90){

        contador++;
        }
        }


    return(contador);
    }
}
