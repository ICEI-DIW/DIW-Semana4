package Tps;
public class CompareTo{                                                                 
    private String conteudo;                                                                
                                                                                             
                                                                                             
     public CompareTo(String palavra){                                                       
     this.conteudo = palavra;                                                                
     }                                                                                       
                                                                                             
     public boolean compareto(String palavra){                                               
    boolean isequal = true;                                                                 
    if(this.conteudo == null || palavra == null || this.conteudo.length() != palavra.length()){
    return(false);                                                                          
    }                                                                                       
        for(int x = 0; x < palavra.length(); x++){                                          
           if(this.conteudo.charAt(x) != palavra.charAt(x)){                               
                return(false);                                                              
                                                                                            
         }                                                                                  
        }                                                                                   
                                                                                            
    return(isequal);                                                                                                                                                                                      
     } 
    }                                                                                                                                                                                                                          
                                                                                                                                                                                               
