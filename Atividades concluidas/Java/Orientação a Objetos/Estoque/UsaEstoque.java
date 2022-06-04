package Estoque;
import javax.swing.JOptionPane;
public class UsaEstoque {

	public static void main(String[] args) {
		Estoque estoque1 = new Estoque(13, 6, "Impressora", 0);
		Estoque estoque2 = new Estoque(11, 13, "Monitor LCD", 0);
		Estoque estoque3 = new Estoque(6, 2, "Mouse ótico", 0);
	
			estoque1.darBaixa(5);
			estoque2.repor(7);
			estoque3.darBaixa(4);
			
			JOptionPane.showMessageDialog(null, "\nEstoque1: " + estoque1.precisaRepor()
			+ "\nProdutos Estoque1: " + estoque1.mostra());
			JOptionPane.showMessageDialog(null, "\nEstoque2: " + estoque2.precisaRepor()
			+ "\nProdutos Estoque1: " + estoque2.mostra());
			JOptionPane.showMessageDialog(null, "\nEstoque3: " + estoque3.precisaRepor()
			+ "\nProdutos Estoque1: " + estoque3.mostra());
	}

}
