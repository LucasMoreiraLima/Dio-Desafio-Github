import java.util.Scanner;
public class AtividadeCurso1 {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        int ano=0, mes=0, dias=0, res=0;
        
        System.out.println("Digite a idade da pessoa: ");
        res=scan.nextInt();
        
        res=res*365;
        
        if ((res>365) && (res>30)){
            ano=res/365;
            mes=res/30;
            
             System.out.printf("A pessoa tem %d anos, %d meses e %d dias.", ano, mes, res);
        }
        
    }   
    }
