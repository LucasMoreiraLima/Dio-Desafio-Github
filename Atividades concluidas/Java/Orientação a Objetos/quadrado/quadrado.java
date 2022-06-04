package quadrado;

public class quadrado {

		double lado;
		public quadrado(double lado) {
			this.lado = lado;
			}
	public double area() {
		return (lado * lado);
	}
	
	public double perimetro() {
		return (lado * 4);
	}
	
	}
