//Questão11

public class ContVogal{
    

    //Método que conta a quantidade de vogais
    public int ContV(String nome){
        int soma = 0;

        for(int i = 0; i < nome.length(); ++i){
              char bit = nome.charAt(i);
              if(bit == 'a' || bit == 'A' || bit == 'e' || bit == 'E' || bit == 'i' || bit == 'I' || bit == 'o' || bit == 'O'|| bit == 'u' || bit == 'U'){
               soma += 1;
              }
        }

        return soma;
    }
}
