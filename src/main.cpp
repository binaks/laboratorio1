#include <iostream>
#include "../include/calcarea.h"
#include "../include/calcperimetro.h"
#include "../include/calcvolume.h"

using std::cin;
using std::cout;
using std::endl;


int main() {

	int opcao;

	do {

		cout << "\nCalculadora de Geometria Plana e Espacial" << endl;
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

		switch (opcao) {
			case 1: /**< Área e perímetro do triângulo */
				CalcAreaTriangulo();
				CalcPeriTriangulo();
				break;
			case 2: /**< Área e perímetro do retângulo */
				CalcAreaRetangulo();
				CalcPeriRetangulo();
				break;
			case 3: /**< Área e perímetro do quadrado */
				CalcAreaQuadrado();
				CalcPeriQuadrado();
				break;
			case 4: /**< Área e perímetro do círculo */
				CalcAreaCirculo();
				CalcPeriCirculo();
				break;
			case 5: /**< Área e volume da pirâmide */
				CalcAreaPiramide();
				CalcVolPiramide();
				break;
			case 6: /**< Área e volume do cubo */
				CalcAreaCubo();
				CalcVolCubo();
				break;
			case 7: /**< Área e volume do paralelepípedo */
				CalcAreaParalelepipedo();
				CalcVolParalelepipedo();
				break;
			case 8: /**< Área e volume da esfera */
				CalcAreaEsfera();
				CalcVolEsfera();
				break;
			default: /**< Caso o valor digitado seja diferente das opções */
				cout << "Opção inválida\n" << endl;
				break;
		}

	} while (opcao != 0); /**< O programa deve reiniciar até que o usuário entre '0' */

	return 0;
}