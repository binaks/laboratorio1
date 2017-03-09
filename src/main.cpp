#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main() {

	int opcao;

	do {

		cout << "Calculadora de Geometria Plana e Espacial" << endl;
		cout << "(1) Triangulo equilatero" << endl;
		cout << "(2) Retangulo" << endl;
		cout << "(3) Quadrado" << endl;
		cout << "(4) Circulo" << endl;
		cout << "(5) Piramide com base quadrangular" << endl;
		cout << "(6) Cubo" << endl;
		cout << "(7) Paralelepipedo" << endl;
		cout << "(8) Esfera" << endl;
		cout << "(0) Sair" << endl;
		cout << "\nDigite a sua opcao:" << endl;

		cin >> opcao;

		if (opcao > 8 || opcao < 0) {
			cout << "Opção inválida\n" << endl;
		}

	} while (opcao != 0);

	return 0;
}