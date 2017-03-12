/**
 * @file main.cpp
 * @brief Programa que calcula área, perímetro e volume de figuras geométricas
 * @author Bianca Rodrigues Cesarino
 * @author Renato Marinheiro
 * @since 09/03/2017
 * @date 12/03/2017
 * @sa https://github.com/binaks/laboratorio1
 */

#include <iostream>
#include "../include/calcarea.h"
#include "../include/calcperimetro.h"
#include "../include/calcvolume.h"

using std::cin;
using std::cout;
using std::endl;


int main() {

	int opcao;

	float x, y, z; /**< Variáveis para receber dados que serão utilizados pelas funções*/

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
				cout << "Digite o tamanho da base do triângulo: ";
				cin >> x;
				cout << "Digite o tamanho da altura do triângulo: ";
				cin >> y;
				cout << "Digite o tamanho do lado do triângulo: ";
				cin >> z;

				CalcAreaTriangulo(x, y);
				CalcPeriTriangulo(z);

				break;

			case 2: /**< Área e perímetro do retângulo */
				cout << "Digite o tamanho da base do retângulo: ";
				cin >> x;
				cout << "Digite o tamanho da altura do retângulo: ";
				cin >> y;

				CalcAreaRetangulo(x, y);
				CalcPeriRetangulo(x, y);

				break;

			case 3: /**< Área e perímetro do quadrado */
				cout << "Digite o tamanho do lado do quadrado ";
				cin >> x;

				CalcAreaQuadrado(x);
				CalcPeriQuadrado(x);

				break;

			case 4: /**< Área e perímetro do círculo */
				cout << "Digite o tamanho do raio: ";
				cin >> x;

				CalcAreaCirculo(x);
				CalcPeriCirculo(x);

				break;

			case 5: /**< Área e volume da pirâmide */
				cout << "Digite o tamanho da base da piramide: ";
				cin >> x;
				cout << "Digite o tamanho da altura da piramide: ";
				cin >> y;

				CalcAreaPiramide(x, y);
				CalcVolPiramide();

				break;

			case 6: /**< Área e volume do cubo */
				cout << "Digite o tamanho do lado do cubo ";
				cin >> x;

				CalcAreaCubo(x);
				CalcVolCubo();

				break;

			case 7: /**< Área e volume do paralelepípedo */
				cout << "Digite o tamanho da base do paralelepípedo: ";
				cin >> x;
				cout << "Digite o tamanho da altura do paralelepípedo: ";
				cin >> y;
				cout << "Digite o tamanho da largura do paralelepípedo: ";
				cin >> z;

				CalcAreaParalelepipedo(x, y, z);
				CalcVolParalelepipedo();

				break;

			case 8: /**< Área e volume da esfera */
				cout << "Digite o tamanho do raio da esfera: ";
				cin >> x;

				CalcAreaEsfera(x);
				CalcVolEsfera(x);

				break;

			default: /**< Caso o valor digitado seja diferente das opções */
				cout << "Opção inválida\n" << endl;
				break;
		}

	} while (opcao != 0); /**< O programa deve reiniciar até que o usuário entre '0' */

	return 0;
}