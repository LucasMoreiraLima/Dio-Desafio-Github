import java.util.Scanner;
public class AtividadeCurso2 {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        
        String sexo, nome;
        int num;
        System.out.println("Escreva seu nome: ");
        nome=scan.nextLine();
        //
        System.out.println("Digite o numero que corresponde ao seu sexo: ");
        //
        System.out.println("--------------------------------");
        System.out.println("1 - Masculino");
        System.out.println("2 - Feminino");
        System.out.println("--------------------------------");
        num=scan.nextInt();
        
        if(num == 1){
            System.out.printf("Ola %s LimaSR", nome);
            
        }
        else if(num == 2){
            System.out.printf("Ola %s LimaSra", nome);
        }
        else{
            System.out.println("Numero invalido, refaca");
        } 
        
    }
    
}
