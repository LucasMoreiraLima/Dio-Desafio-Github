package quadrado;
/**
 *
 * @author Lucas Moreira Lima
 */
public class UsaQuadrado {
    public static void main(String[] args){
    	quadrado q1 = new quadrado(0);
    			quadrado q2 = new quadrado(0);
    					quadrado q3 = new quadrado(0);
        q1.lado = 2;
        q2.lado = 4;
        q3.lado = 5;
        System.out.printf("área de q1: %f. Perimetro de q1: %f",q1.lado, q1.lado * 4);
        System.out.printf("\nárea de q2: %f. Perimetro de q2: %f",q2.lado, q2.lado * 4);
        System.out.printf("\nárea de q3: %f. Perimetro de q3: %f",q3.lado, q3.lado * 4);
    }
    }
