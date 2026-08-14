import java.util.Scanner;

public class Espelho {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        while(sc.hasNextInt()){
            int s = sc.nextInt();
            int e = sc.nextInt();

            String sequencia = "";

            for(int x = s; x <= e; x++){
                sequencia += x;
            }

            String invertida = "";
            
            for(int i = sequencia.length() - 1; i >= 0; i--){
                invertida += sequencia.charAt(i);
            }

            System.out.println(sequencia + invertida);
        }

        sc.close();
    }
}