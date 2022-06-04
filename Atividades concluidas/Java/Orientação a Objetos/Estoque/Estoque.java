package Estoque;
import javax.swing.JOptionPane;
public class Estoque {
	String Nome;
	int qtdMinima, qtdAtual;
	double valor;
	public Estoque(){
		
	}
	public Estoque(int qtdAtual, int qtdMinima, String Nome, double valor) {
		this.qtdAtual = qtdAtual;
		this.qtdMinima = qtdMinima;
		this.Nome = Nome;
		this.valor = valor;
	}
	void mudarNome(String Nome) {
		this.Nome = Nome;
	}
	void mudarQtdMinima(int qtdMinima) {
		this.qtdMinima = qtdMinima;
	}
	void repor(int qtd) {
		if(qtd > 0) {
		if(qtd <= qtdAtual) {
		int repor = this.qtdAtual + qtd;
		this.qtdAtual = repor;
		}
		}
	}
	void darBaixa(int qtd) {
		int darBaixa = this.qtdAtual - qtd;
		this.qtdAtual = darBaixa;
	}
	String mostra() {
		return "\nProduto: " + Nome + "\nQuantidade Mínima de: " + qtdMinima + 
				"\nQuantidade Atual de: " + qtdAtual;
	}
	String precisaRepor() {
		if(qtdAtual <= qtdMinima) {
			return "Precisa repor";
		}else {
			return "Não precisa repor";
		}
	}
}

