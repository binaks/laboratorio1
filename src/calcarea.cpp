#include <iostream>
#include "../include/calcarea.h"
#include "../include/area.h"

using std::cin;
using std::cout;

void CalcAreaTriangulo () {
	float base;
	float altura;

	cout << "Digite o tamanho da base do triângulo: ";
	cin >> base;
	cout << "Digite o tamanho da altura do triângulo: ";
	cin >> altura;

	cout << "Área do triângulo: " << AreaTriangulo(base, altura) << std::endl;


}