import java.util.Scanner;
/**
 *
 * @author Lucas Moreira Lima
 */
public class AtividadeCurso3 {
    public static void main(String[] args) {
        double slr, slr2;
        Scanner tcl = new Scanner(System.in);
        
        System.out.println("Digite seu salário");
        slr=tcl.nextDouble();
        
        slr=slr+slr*0.10;
        slr2=slr*0.10;
            System.out.printf("Seu ganho com reajuste: %s\n", slr2);
            System.out.printf("Seu salário após reajuste: %s", slr);
    }
}
