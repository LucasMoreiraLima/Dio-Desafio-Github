import java.util.Scanner;

/**
 *
 * @author LucasMoreiraLima
 */
public class AtividadeCurso5 {
    public static void main(String[] args) {
        Scanner tcl = new Scanner(System.in);
        int vetor[] = new int[10];
        int i, soma = 0, mtp = 1;
        System.out.println("Digite dez números inteiros");
        for (i = 0; i < 10; i++) {
            System.out.printf("Vetor[%d]: ", i);
            vetor[i] = tcl.nextInt();
        }
            for (i = 0; i < 10; i++) {
            	if (vetor[i] % 2 == 0) {  
                        mtp = vetor[i] * mtp;
                }else {
                        soma = vetor[i] + soma;
                    }
                }
            
        System.out.printf("\nA multiplicação dos Vetores pares é: %d", mtp);
        System.out.printf("\nA soma dos Vetores ímpares é: %d", soma);
    }
    }
