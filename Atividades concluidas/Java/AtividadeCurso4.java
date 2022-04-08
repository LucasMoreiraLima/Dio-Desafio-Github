import java.util.Scanner;
/**
 *
 * @author Lucas Moreira Lima
 */
public class AtividadeCurso4 {
    public static void main(String[] args){
        double slr, hr, vlr;
        Scanner tcl = new Scanner(System.in);
        
        System.out.println("Digite suas horas trabalhadas: ");
        hr=tcl.nextDouble();
        
        System.out.println("Digite o valor da hora trabalhada: ");
        vlr=tcl.nextDouble();
        
        slr=vlr*hr;
        
        System.out.printf("Seu salário é de: %s", slr);
    }
    
}
