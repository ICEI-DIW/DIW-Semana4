import java.util.Scanner;
public class Atividade_01 {
    public static void main(String[] args){
        String palavra = "";
        Scanner sc = new Scanner(System.in);
        int qtd = 0;
       while (!(palavra = sc.nextLine()).equals("FIM")) {
            qtd = Upper(palavra);
            System.out.println(qtd);
        }

        sc.close();
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
