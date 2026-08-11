import java.util.Scanner;
public class Atividade_01_Recursao {
        public static void main(String[] args){
            
        String palavra = "";
        int index = 0;
        int count = 0;
        Scanner sc = new Scanner(System.in);
        int qtd = 0;
        do{
        System.out.print("Escolha uma palavra:");
        palavra = sc.nextLine();
        qtd = Upperrecursive(palavra, index,count);
        System.out.println(qtd);
        }while(palavra.compareTo("FIM")!= 0);




    
    }
    public static int Upperrecursive(String palavra, int index, int count){
        if(index >= palavra.length()){
            return(count);
        }
            if(palavra.charAt(index) >= 65 && palavra.charAt(index) <=90){ 
                count++;
            }
            return Upperrecursive(palavra, index+1, count);
    }
}
