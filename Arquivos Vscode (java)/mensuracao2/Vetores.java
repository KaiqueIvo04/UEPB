package mensuracao2;

public class Vetores {

    public static void main(String[] args) {

        String vetor[] = {"Kaique", "Gabriel", "Jamilson"};
        char temp, a = 'a',e = 'e';
        int letrasA = 0, letrasE = 0;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < vetor[i].length(); i++) {

                temp = vetor[0].charAt(a);
                if (temp == 'a') {
                    letrasA ++;
                }
            }
            for (int j = 0; j < vetor[i].length(); i++) {

                temp = vetor[0].charAt(e);
                if (temp == 'a') {
                    letrasA ++;
                }
            }
        }
        System.out.printf("Total de letras A: %d", letrasA);
        System.out.printf("Total de letras E: %d", letrasE);


    }
}        