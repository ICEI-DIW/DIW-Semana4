import java.util.*;
public class aleatoria {

    public static String random(String a, char p, char s){
       String resultado  = "";
        for(int x =0; x < a.length(); x++){
            if(a.charAt(x) == p){   
                resultado = resultado+s;
            }
            else{
                resultado = resultado+ a.charAt(x);
            
            }
        }
        return(resultado);
    }


    public static void main(String[] args){
        char[] num = new char[2];
        char p = ' ';
       char s = ' ';
       int b = 0;
        Scanner sc = new Scanner(System.in);
        String palavra = "";
        palavra = sc.nextLine();
        Random random = new Random();
        random.setSeed(4);
        while(b < 2){
            num[b] = ( char ) ( 'a'+(Math.abs(random.nextInt())%26));
        b++;
        }
        p = num[0];
        s = num[1];
        CompareTo comparada = new CompareTo(palavra);
            while(!comparada.compareto("FIM")){
                if(!comparada.compareto("FIM")){
                System.out.println(random(palavra, p, s));
                }
                palavra = sc.nextLine();
                comparada = new CompareTo(palavra);
            }
        sc.close();
    }


}
