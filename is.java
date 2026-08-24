public class is {
    
    public static boolean vogal(String palavra){
        boolean condicao = true;
        for(int x=0; x < palavra.length(); x++){
            
            if(palavra.charAt(x) == 'a' || palavra.charAt(x) == 'e' || 
            palavra.charAt(x) == 'i'|| palavra.charAt(x) == 'o' || palavra.charAt(x) == 'u' ||
            palavra.charAt(x) == 'A' || palavra.charAt(x) == 'E' || 
            palavra.charAt(x) == 'I'|| palavra.charAt(x) == 'O' || palavra.charAt(x) == 'U' && condicao){
                condicao = true;
            }
            else{

                condicao = false;

            }

        }
        return(condicao);
    }


    public static boolean consoante(String palavra){
        boolean condicao =true;
        for(int x=0; x < palavra.length(); x++){
            
            if(palavra.charAt(x) == 'a' || palavra.charAt(x) == 'e' || 
            palavra.charAt(x) == 'i'|| palavra.charAt(x) == 'o' || palavra.charAt(x) == 'u' ||
            palavra.charAt(x) == 'A' || palavra.charAt(x) == 'E' || 
            palavra.charAt(x) == 'I'|| palavra.charAt(x) == 'O' || palavra.charAt(x) == 'U' && condicao){
                condicao = false;
            }
            else{

                condicao = true;

            }

        }
        return(condicao);
    }
    }


    public static boolean inteiro(String palavra){
        boolean condicao = false;



        return(condicao);
    }
    public static void main(String[] args){













    }



